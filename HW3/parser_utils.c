#include "parser_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

extern struct SymbolTable st;
extern int opt_symbol; 
void init_symbol_table()
{
    st.data = malloc(sizeof(struct SymbolEntry) * SYM_INIT_SIZE);
    if (st.data == NULL) {
        return ;
    }
    st.size = 0;
    st.capacity = SYM_INIT_SIZE;
    st.curr_level = 0;
}
void push_scope()
{
    st.curr_level++;
}
void pop_scope()
{
    print_table();
    if (st.curr_level == 0) {
        return ;
    }
    if (st.size) {
        struct SymbolEntry *last = &st.data[st.size - 1];
        if (last->level == st.curr_level) { /* not a empty scope */
            st.size = last->level_offset;
        }
    }
    st.curr_level--;
}
static void enlarge_space()
{
    struct SymbolEntry *new_data = malloc(2 * st.capacity * sizeof(struct SymbolEntry));
    memcpy(new_data, st.data, st.capacity);
    free(st.data);
    st.data = new_data;
    st.capacity = 2 * st.capacity;
}

static int get_level_offset()
{
    if (st.size && st.data[st.size - 1].level == st.curr_level) {
        return st.data[st.size - 1].level_offset;
    } else { /* empty scope */
        return st.size;
    }
}
struct SymbolEntry *add_entry(struct IDPair *id)
{
    if (st.size == st.capacity) {
        enlarge_space();
    }
    struct SymbolEntry *new_entry = &st.data[st.size];
    new_entry->id = *id;
    new_entry->kind = NULL_KIND;
    new_entry->level = st.curr_level;
    new_entry->level_offset = get_level_offset();
    new_entry->attributes = NULL;

    st.size++;
    return new_entry;
}
static struct SymbolEntry *_find_entry(const struct IDPair *id, enum ScopeType scope)
{
    int base = 0;
    if (scope == S_LOCAL) {
        base = get_level_offset();
    }
    for (int i = st.size - 1; i >= base; i--) {
        struct SymbolEntry *e = &st.data[i];
        if (strcmp(e->id.name, id->name) == 0) {
            return e;
        }
    }
    return NULL;
}
struct SymbolEntry *find_entry(const struct IDPair *id)
{
    return _find_entry(id, S_GLOBAL);
}
struct SymbolEntry *find_entry_in_scope(const struct IDPair *id)
{
    return _find_entry(id, S_LOCAL);
}
static char *kind_str(enum SymbolKind kind)
{
    switch (kind) {
        case S_FUNC:
        case S_FUNC_DEFINED:
            return "function";
        case S_PARAM:
            return "parameter";
        case S_VAR:
            return "variable";
        case S_CONST:
            return "constant";
        default:
            return NULL;
    }
}
static char *type_str(enum SymbolType type)
{
    switch (type) {
        case S_INT:
            return "int";
        case S_FLOAT: 
            return "float";
        case S_DOUBLE:
            return "double";
        case S_BOOL:
            return "bool";
        case S_STRING:
            return "string";
        case S_VOID:
            return "void";
        default:
            return NULL;
    }
}
static void print_type_str(struct TypeInfo *type_info)
{
    printf("%s", type_str(type_info->type));
    struct ArraySize *curr = type_info->array_sizes;
    while (curr) {
        printf("[%d]", curr->size);
        curr = curr->next;
    }
}
static char *scope_str(enum ScopeType type)
{
    if (type == S_GLOBAL) {
        return "global";
    }
    return "local";
}
static void print_arg(struct SymbolEntry *e)
{
    struct Attribute *curr = e->attributes;
    int first = 1;
    while (curr) {
        if (!first) {
            putchar(',');
        }
        first = 0;
        print_type_str(&curr->data.arg.type_info);
        curr = curr->next;
    }
}
static char *bool_str(int val)
{
    if (val) {
        return "true";
    }

    return "false";
}
static void print_const_val(struct SymbolEntry *e)
{
    switch (e->attributes->type) {
        case S_CONST_INT:
            printf("%d", e->attributes->data.val);
            break;
        case S_CONST_DOUBLE:
            printf("%f", e->attributes->data.lfval);
            break;
        case S_CONST_BOOL:
            printf("%s", bool_str(e->attributes->data.val));
            break;
        case S_CONST_STR:
            printf("\"%s\"", e->attributes->data.str);
            break;
        default:
            break;
    }
}
static void print_attr(struct SymbolEntry *e)
{
    switch (e->kind) {
        case S_FUNC:
        case S_FUNC_DEFINED:
            print_arg(e);
            break;
        case S_CONST:
            print_const_val(e);
            break;
        default:
            break;
    }
}
static void print_entry(struct SymbolEntry *e)
{
    printf("%-12s\t%s\t%d(%s)\t", e->id.name, kind_str(e->kind), e->level, scope_str(e->level));
    print_type_str(&e->id.type_info);
    printf("\t\t");
    print_attr(e);
    printf("\n");
}
void print_table()
{
    if (!opt_symbol) {
        return ;
    }
    printf("Name\t\tKind\t\tLevel\t\tType\t\tAttribute\n");
    printf("-------------------------------------------------------------------------------------\n");
    for (int i = get_level_offset(); i < st.size; i++) {
        if (st.data[i].level >= st.curr_level) {
            print_entry(&st.data[i]);
        }
    }
    putchar('\n');
}

/* error handling */
extern struct ErrorTable et;
extern int has_sem_error;
void push_error(const char *msg)
{
    has_sem_error = 1;
    struct ErrorEntry *e = malloc(sizeof(struct ErrorEntry));
    e->msg = strdup(msg);
    e->next = NULL;
    if (et.head == NULL) {
        et.head = et.tail = e;
        return ;
    }
    
    et.tail->next = e;
    et.tail = e;
}
void print_error()
{
    struct ErrorEntry *curr = et.head;
    while (curr) {
        fprintf(stderr, "%s\n", curr->msg);
        curr = curr->next;
    }
}
