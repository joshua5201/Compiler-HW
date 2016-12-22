#include "actions.h"
#include "parser_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

extern int in_loop;
extern int last_stmt_is_return;
extern int linenum;
extern enum SymbolType should_return;
int conflict_id_count = 0;
struct TypeInfo int_type = { .type = S_INT, .array_dim = 0, .array_sizes = NULL };
static void sem_error(int line, const char *msg)
{
    char s[128];
    snprintf(s, 127, "##########Error at Line %d: %s.##########\n", line, msg);
    push_error(s);
}

static void sem_error_with_id(int line, const char *msg, struct IDPair *id)
{
    char s[128];
    snprintf(s, 127, "##########Error at Line %d: %s `%s'.##########\n", line, msg, id->name);
    push_error(s);
}
static int convertible(enum SymbolType type)
{
    return (type == S_INT || type == S_FLOAT || type == S_DOUBLE);
}
static int invalid_conversion(enum SymbolType larger, enum SymbolType smaller)
{
    if (larger == smaller) {
        return 0;
    }
    if (smaller > larger) {
        return -1;
    }
    if (convertible(larger) && convertible(smaller) && larger > smaller) {
        return 0;
    }
    return -1;
}
struct IDPair *make_id(struct IDPair *id, const char *name)
{
    if (id == NULL) {
        id = malloc(sizeof(struct IDPair));
    }
    strncpy(id->name, name, 33);
    id->name[32] = '\0';
    id->type_info.type = NULL_TYPE;
    id->type_info.array_dim = 0;
    id->type_info.array_sizes = NULL;

    return id;
}
struct Attribute *make_attr(enum AttrType attr_type, union AttrData data)
{
    struct Attribute *new_attr = malloc(sizeof(struct Attribute));
    new_attr->next = NULL;
    new_attr->type = attr_type;
    switch (attr_type) {
        case S_ARG:
            new_attr->data.arg = data.arg;
            break;
        case S_ATTR_PARAM:
            new_attr->data.param = data.param;
            break;
        case S_ELEM:
            new_attr->data.param = data.elem;
            break;
        case S_LIST:
            new_attr->data.sublist = data.sublist;
            break;
        case S_CONST_INT:
        case S_CONST_BOOL:
            new_attr->data.val = data.val;
            break;
        case S_CONST_DOUBLE:
            new_attr->data.lfval = data.lfval;
            break;
        case S_CONST_STR:
            new_attr->data.str = strdup(data.str);
            break;
        default:
            break;
    }
    return new_attr;
}
static struct AttrList *push_attr(struct AttrList *attr_list, enum AttrType attr_type, union AttrData *data)
{
    struct Attribute *new_attr = make_attr(attr_type, *data);
    if (attr_list == NULL) {
        attr_list = malloc(sizeof(struct AttrList));
        attr_list->head = attr_list->tail = NULL;
    }
    if (attr_list->head == NULL) {
        attr_list->head = attr_list->tail = new_attr;
        return attr_list;
    }
    attr_list->tail->next = new_attr;
    attr_list->tail = new_attr;
    return attr_list;
}
struct IDPair *make_arg(enum SymbolType type, struct IDPair *id)
{
    id->type_info.type = type;
    return id;
}
struct AttrList *push_arg(struct AttrList *arg_list, struct IDPair *arg)
{
    return push_attr(arg_list, S_ARG, (union AttrData *)arg);
}
struct AttrList *push_param(struct AttrList *param_list, struct TypeInfo *param)
{
    return push_attr(param_list, S_ATTR_PARAM, (union AttrData *)param);
}
struct AttrList *push_elem(struct AttrList *elem_list, struct TypeInfo *elem)
{
    if (elem_list == NULL) {
        elem_list = malloc(sizeof(struct AttrList));
        elem_list->head = elem_list->tail = NULL;
    }
    return push_attr(elem_list, S_ELEM, (union AttrData *)elem);
}
void push_array_dim(struct IDPair *id, int size)
{
    if (size <= 0) {
        sem_error_with_id(linenum, "invalid array index of", id);
        size = 1;
    }
    id->type_info.array_dim++;
    struct ArraySize *new_size = malloc(sizeof(struct ArraySize));
    new_size->next = NULL;
    new_size->size = size;
    if (id->type_info.array_sizes == NULL) {
        id->type_info.array_sizes = id->type_info.array_tail = new_size;
        return ;
    }
    id->type_info.array_tail->next = new_size;
    id->type_info.array_tail = new_size;
    return ;
}
void func_decl(enum SymbolType type, struct IDPair *id, struct AttrList *arg_list)
{
    if (find_entry(id)) {
        sem_error_with_id(linenum, "function redeclaration of", id);
        char temp_name[33];
        sprintf(temp_name, "conflict_id%d", conflict_id_count++);
        strcpy(id->name, temp_name);
    }
    id->type_info.type = type;
    struct SymbolEntry *e = add_entry(id);
    if (arg_list) {
        e->attributes = arg_list->head;
        free(arg_list);
    }
    e->kind = S_FUNC;
}

static int array_size_cmp(struct IDPair *id, struct TypeInfo *type_info1, struct TypeInfo *type_info2)
{
    if (type_info1->array_dim != type_info2->array_dim) {
        sem_error_with_id(linenum, "array dimension mismatch:", id);
        return 1;
    }
    struct ArraySize *sz1 = type_info1->array_sizes;
    struct ArraySize *sz2 = type_info2->array_sizes;
    while (sz1 && sz2) {
        if (sz1->size != sz2->size) {
            sem_error_with_id(linenum, "array index mismatch:", id);
            return 1;
        }
        sz1 = sz1->next;
        sz2 = sz2->next;
    }
    return 0;
}
static int type_cmp(struct IDPair *id, struct TypeInfo *type_info1, struct TypeInfo *type_info2)
{
    if (invalid_conversion(type_info1->type, type_info2->type)) {
        sem_error_with_id(linenum, "invalid param type:", id);
        return 1;
    }
    if (array_size_cmp(id, type_info1, type_info2)) {
        return 1;
    }
    return 0;
}
static int strict_type_cmp(struct IDPair *id, struct TypeInfo *type_info1, struct TypeInfo *type_info2)
{
    if (type_info1->type != type_info2->type) {
        sem_error_with_id(linenum, "invalid argument type:", id);
        return 1;
    }
    if (array_size_cmp(id, type_info1, type_info2)) {
        return 1;
    }

    return 0;
}

static inline struct TypeInfo *arg_type_info(struct Attribute *attr)
{
    return &(attr->data.arg.type_info);
}
static inline struct TypeInfo *param_type_info(struct Attribute *attr)
{
    return &(attr->data.param);
}

static int cmp_func_arg_with_decl(struct IDPair *id, struct Attribute *decl, struct AttrList *list)
{
    struct Attribute *def = NULL;
    if (list) {
        def = list->head;
    }
    while (decl || def) {
        if (decl == NULL) {
            sem_error_with_id(linenum, "too many arguments for", id);
            return 1;
        } else if (def == NULL) {
            sem_error_with_id(linenum, "too few arguments for", id);
            return 1;
        }
        if (def->type == S_ARG) {
            if (strict_type_cmp(id, arg_type_info(decl), arg_type_info(def))) {
                return 1;
            }
        } else if (def->type == S_ATTR_PARAM) {
            /* func_invoke */
            if (type_cmp(id, arg_type_info(decl), param_type_info(def))) {
                return 1;
            }
        }

        decl = decl->next;
        def = def->next;
    }

    return 0;
}
void func_def(enum SymbolType type, struct IDPair *id, struct AttrList *arg_list)
{
    id->type_info.type = type;
    struct SymbolEntry *e = find_entry(id);
    if (e == NULL) {
        e = add_entry(id);
        if (arg_list) {
            e->attributes = arg_list->head;
        } else {
            e->attributes = NULL;
        }
    } else {
        if (e->kind == S_FUNC_DEFINED) {
            sem_error_with_id(linenum, "function redefinition of", id);
            char temp_name[33];
            sprintf(temp_name, "conflict_id%d", conflict_id_count++);
            strcpy(id->name, temp_name);
            e = add_entry(id);
            goto no_need_to_check;
        } 
        if (e->id.type_info.type != type) {
            sem_error_with_id(linenum, "conflicting return type for", id);
            type = e->id.type_info.type;
        }
        if (cmp_func_arg_with_decl(id, e->attributes, arg_list)) {
            arg_list->head = e->attributes;
        }
    }
no_need_to_check: /* great spaghetti code */
    e->kind = S_FUNC_DEFINED;
    push_scope();
    struct Attribute *curr = NULL;
    if (arg_list) {
        curr = arg_list->head;
    }
    while (curr) {
        if (curr->type == S_ARG) {
            struct IDPair *arg = &(curr->data.arg);
            if (find_entry_in_scope(arg)) {
                sem_error_with_id(linenum, "redefinition of parameter", arg);
                char temp_name[33];
                sprintf(temp_name, "conflict_id%d", conflict_id_count++);
                strcpy(arg->name, temp_name);
            }
            struct SymbolEntry *param = add_entry(arg);
            param->kind = S_PARAM;
        }
        curr = curr->next;
    } 
    if (arg_list) {
        free(arg_list);
    }
    should_return = type;
}
struct Attribute *make_string(const char *str)
{
    return make_attr(S_CONST_STR, (union AttrData)str);
}
struct Attribute *make_int(const int val)
{
    return make_attr(S_CONST_INT, (union AttrData)val);
}
struct Attribute *make_float_lit(const double lfval)
{
    return make_attr(S_CONST_DOUBLE, (union AttrData)lfval);
}
struct Attribute *make_bool(const int boolval)
{
    return make_attr(S_CONST_BOOL, (union AttrData)boolval);
}
struct Attribute *default_const_lt(enum SymbolType type)
{
    struct Attribute *d = malloc(sizeof(struct Attribute));
    switch (type) {
        case S_INT:
            d->data.val = 0;
            d->type = S_CONST_INT;
            break;
        case S_FLOAT:
        case S_DOUBLE:
            d->data.lfval = 0.0;
            d->type = S_CONST_DOUBLE;
            break;
        case S_BOOL:
            d->data.val = 0;
            d->type = S_CONST_BOOL;
            break;
        case S_STRING:
            d->data.str = "";
            d->type = S_CONST_STR;
            break;
        default:
            break;
    }
    return d;
}
void const_decl(enum SymbolType type, struct IDPair *id, struct Attribute *lt)
{
    if (find_entry_in_scope(id)) {
        sem_error_with_id(linenum, "redeclaration of", id);
        char temp_name[33];
        sprintf(temp_name, "conflict_id%d", conflict_id_count++);
        strcpy(id->name, temp_name);
    }
    struct TypeInfo *const_type = get_scaler_literal_type(lt);
    if (invalid_conversion(type, const_type->type)) {
        sem_error_with_id(linenum, "invalid assignment of", id);
        lt = default_const_lt(type);
    }
    free(const_type);
    id->type_info.type = type;
    struct SymbolEntry *e = add_entry(id);
    e->kind = S_CONST;
    e->attributes = lt;
}

inline static int not_scaler(struct TypeInfo *type_info)
{
    if (type_info->array_dim) {
        return 1;
    }
    return 0;
}
inline static void check_scaler(struct TypeInfo *type_info)
{
    if (not_scaler(type_info)) {
        sem_error(linenum, "only scaler type is allowed for this operation");
    }
}
struct TypeInfo *logic_op(struct TypeInfo *lhs, struct TypeInfo *rhs)
{
    if (lhs->type != S_BOOL || rhs->type != S_BOOL) {
        sem_error(linenum, "operands of logic operator not bool type");
    }
    return lhs;
}
static int invalid_arith_type(struct TypeInfo *type_info)
{
    return !(type_info->type == S_INT || type_info->type == S_FLOAT || type_info->type == S_DOUBLE);
}
struct TypeInfo *relation_op(struct TypeInfo *lhs, struct TypeInfo *rhs)
{
    check_scaler(lhs);
    check_scaler(rhs);
    if (invalid_arith_type(lhs) || invalid_arith_type(rhs)) {
        sem_error(linenum, "invalid relational expression");
        lhs->type = rhs->type = S_INT;
    }
    struct TypeInfo *bool_type = malloc(sizeof(struct TypeInfo));
    bool_type->type = S_BOOL;
    bool_type->array_dim = 0;
    bool_type->array_sizes = NULL;
    
    return bool_type;
}
struct TypeInfo *arith_op(struct TypeInfo *lhs, struct TypeInfo *rhs)
{
    check_scaler(lhs);
    check_scaler(rhs);
    if (invalid_arith_type(lhs) || invalid_arith_type(rhs)) {
        sem_error(linenum, "invalid arithmetic expression");
        lhs->type = rhs->type = S_INT;
    }
    if (lhs->type == rhs->type) {
        return lhs;
    }
    if (lhs->type > rhs->type) {
        /* promote rhs */
        return lhs;
    }
    return rhs;
}
struct TypeInfo *modulo_op(struct TypeInfo *lhs, struct TypeInfo *rhs)
{
    check_scaler(lhs);
    check_scaler(rhs);
    if (lhs->type != S_INT || rhs->type != S_INT) {
        sem_error(linenum, "operand of modulo operator not int type");
        lhs->type = rhs->type = S_INT;
    }
    return lhs;
}
struct TypeInfo *negate_op(struct TypeInfo *opr)
{
    check_scaler(opr);
    if (invalid_arith_type(opr)) {
        sem_error(linenum, "invalid arithmetic expression");
        opr->type = S_INT;
    }

    return opr;
}
struct TypeInfo *not_op(struct TypeInfo *opr)
{
    check_scaler(opr);
    if (opr->type != S_BOOL) {
        sem_error(linenum, "operands of logic operator not bool type");
        opr->type = S_BOOL;
    }

    return opr;
}
struct TypeInfo *get_scaler_literal_type(struct Attribute *lt)
{
    struct TypeInfo *type_info = malloc(sizeof(struct TypeInfo));
    type_info->array_dim = 0;
    type_info->array_sizes = NULL;
    switch (lt->type) {
        case S_CONST_INT:
            type_info->type = S_INT;
            break;
        case S_CONST_DOUBLE:
            type_info->type = S_FLOAT;
            break;
        case S_CONST_BOOL:
            type_info->type = S_BOOL;
            break;
        case S_CONST_STR:
            type_info->type = S_STRING;
            break;
        default :
            sem_error(linenum, "invalid expression");
            type_info->type = S_INT;
            break;
    }

    return type_info;
}

struct TypeInfo *identifier_expr(struct IDPair *id)
{
    struct SymbolEntry *e = find_entry(id);
    if (e == NULL) {
       sem_error_with_id(linenum, "unknown identifier", id);
       return &int_type;
    }
    if (e->kind != S_PARAM && e->kind != S_VAR && e->kind != S_CONST) {
       sem_error_with_id(linenum, "invalid identifer reference", id);
       return &int_type;
    }
    check_scaler(&e->id.type_info);
    return &e->id.type_info;
}
struct TypeInfo *func_invoke(struct IDPair *id, struct AttrList *param_list)
{
    struct SymbolEntry *e = find_entry(id);
    if (e == NULL) {
        sem_error_with_id(linenum, "unknown identifier", id);
        return &int_type;
    }
    if (e->kind != S_FUNC_DEFINED && e->kind != S_FUNC) {
        sem_error_with_id(linenum, "not a function: ", id);
        return &int_type;
    }
    cmp_func_arg_with_decl(&e->id, e->attributes, param_list);
    return &(e->id.type_info);
}
struct ArrayRef *make_aref(struct IDPair *id)
{
    struct SymbolEntry *e = find_entry(id);
    struct ArrayRef *aref = malloc(sizeof(struct ArrayRef));
    if (e == NULL) {
        sem_error_with_id(linenum, "unknown identifier", id);
        aref->id = id;
        aref->error = 1;
        return aref;
    } 
    id = &(e->id);
    if (e->id.type_info.array_dim == 0) {
        sem_error_with_id(linenum, "identifier not an array: ", id);
        aref->error = 1;
    } else {
        aref->error = 0;
    }
    aref->id = id;
    aref->referenced = 0;
    return aref;
}
struct ArrayRef *array_ref(struct ArrayRef *aref, struct TypeInfo *idx)
{
    if (idx->type != S_INT) {
        sem_error_with_id(linenum, "array reference index should be an integer:", aref->id);
        idx->type = S_INT;
    }
    if (aref->error) {
        return aref;
    }
    if (aref->referenced < aref->id->type_info.array_dim) {
        aref->referenced++;
    } else {
        sem_error_with_id(linenum, "dimension too large when referencing array", aref->id);
    } 
    return aref;
}
struct TypeInfo *get_array_elem_type(struct ArrayRef *aref)
{
    struct TypeInfo *elem_type = malloc(sizeof(struct TypeInfo));
    elem_type->array_dim = 0;
    elem_type->array_sizes = elem_type->array_tail = 0;
    elem_type->type = aref->id->type_info.type;

    return elem_type;
}
struct Assignment *scaler_assignment(struct IDPair *id, struct TypeInfo *expr)
{
    check_scaler(expr);
    struct Assignment *res = malloc(sizeof(struct Assignment));
    res->id = id;
    res->expr = expr;
    res->array = NULL;
    return res;
}
struct TypeInfo *assignment_expr(struct Assignment *as)
{
    struct SymbolEntry *e = find_entry(as->id);
    if (e == NULL) {
        sem_error_with_id(linenum, "unknown identifier: ", as->id);
        as->id->type_info = *(as->expr);
        e = add_entry(as->id);
        e->kind = S_VAR;
    }
    if (e->kind != S_VAR && e->kind != S_PARAM) {
        sem_error_with_id(linenum, "not a variable: ", as->id);
    }
    struct TypeInfo *left_type = &e->id.type_info;
    struct TypeInfo *right_type = as->expr;
    check_scaler(left_type);
    check_scaler(right_type);
    if (invalid_conversion(left_type->type, right_type->type)) {
        sem_error_with_id(linenum, "invalid assignment of", as->id);
    }
    return left_type;
}
void scaler_var_decl(enum SymbolType type, struct IDPair *id)
{
    if (find_entry_in_scope(id)) {
        sem_error_with_id(linenum, "redeclation of", id);
        char temp_name[33];
        sprintf(temp_name, "conflict_id%d", conflict_id_count++);
        strcpy(id->name, temp_name);
    }
    id->type_info.array_dim = 0;
    id->type_info.array_sizes = NULL;
    id->type_info.type = type;
    struct SymbolEntry *e = add_entry(id);
    e->kind = S_VAR;
}
void scaler_var_def(enum SymbolType type, struct Assignment *as)
{
    if (find_entry_in_scope(as->id)) {
        sem_error_with_id(linenum, "redeclation of", as->id);
        char temp_name[33];
        sprintf(temp_name, "conflict_id%d", conflict_id_count++);
        strcpy(as->id->name, temp_name);
    }
    check_scaler(as->expr);
    if (invalid_conversion(type, as->expr->type)) {
        sem_error_with_id(linenum, "invalid assignment of", as->id);
    }
    as->id->type_info.type = type; as->id->type_info.array_dim = 0;
    as->id->type_info.array_sizes = NULL;
    struct SymbolEntry *e = add_entry(as->id);
    e->kind = S_VAR;
}
struct Assignment *array_assignment(struct IDPair *id, struct AttrList *array_literal)
{
    struct Assignment *as = malloc(sizeof(struct Assignment));
    as->id = id;
    as->array = array_literal;
    as->expr = NULL;

    return as;
}
static int list_len(struct AttrList *l)
{
    if (l == NULL) {
        return 0;
    }
    if (l->head == NULL) {
        return 0;
    }
    struct Attribute *curr = l->head;
    int len = 0;
    while (curr) {
        curr = curr->next;
        len++;
    }

    return len;
}
static int flatten_size(struct TypeInfo *t)
{
    struct ArraySize *curr = t->array_sizes;
    int size = 1;
    while (curr) {
        size *= curr->size;
        curr = curr->next;
    }

    return size;
}
static int check_array_type(struct TypeInfo *t, struct AttrList *elem_list)
{
    int f_size = flatten_size(t);
    int len = list_len(elem_list);
    if (len > f_size) {
        return 1;
    }
    for (int i = 0; i < f_size - len; i++) {
        elem_list = push_elem(elem_list, t);
    }
    struct Attribute *curr = elem_list->head;
    while (curr) {
        if (invalid_conversion(t->type, curr->data.elem.type)) {
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}
void array_var_def(enum SymbolType type, struct Assignment *as)
{
    if (find_entry_in_scope(as->id)) {
        sem_error_with_id(linenum, "redeclation of", as->id);
        char temp_name[33];
        sprintf(temp_name, "conflict_id%d", conflict_id_count++);
        strcpy(as->id->name, temp_name);
    }
    as->id->type_info.type = type;
    if (as->id->type_info.array_dim == 0) {
        sem_error_with_id(linenum, "array assignment from scaler value:", as->id);
    }
    if (check_array_type(&as->id->type_info, as->array)) {
        sem_error_with_id(linenum, "invalid array assignment of", as->id);
    }
    struct SymbolEntry *e = add_entry(as->id);
    e->kind = S_VAR;
}
struct TypeInfo *array_ref_assignment(struct ArrayRef *aref, struct TypeInfo *expr)
{
    struct TypeInfo *aref_type = get_array_elem_type(aref);
    if (invalid_conversion(aref_type->type, expr->type)) {
        sem_error_with_id(linenum, "invalid array element assignment of", aref->id);
    }
    
    return aref_type;
}
void check_cond(struct TypeInfo *expr)
{
    if (expr->type != S_BOOL) {
        sem_error(linenum, "condition should be bool type");
    }
}
void check_return(struct IDPair *id)
{
    if (!last_stmt_is_return) {
        sem_error_with_id(linenum, "expect return statement in function definition of", id);
    }
    should_return = NULL_TYPE;
}
void return_stmt(struct TypeInfo *ret_type)
{
    if (ret_type == NULL) {
        if (should_return != S_VOID) {
            sem_error(linenum, "invalid return type");
        }
        return ;
    }
    if (invalid_conversion(should_return, ret_type->type)) {
        sem_error(linenum, "invalid return type");
    }
}
void check_jump()
{
    if (in_loop == 0) {
        sem_error(linenum, "jump statement outside loop");
    }
}
