#ifndef ACTION_H
#define ACTION_H
#include "parser_utils.h"

struct IDPair *make_id(struct IDPair *id, const char *name);
struct AttrList *push_arg(struct AttrList *arg_list, struct IDPair *arg);
struct IDPair *make_arg(enum SymbolType type, struct IDPair *id);
void push_array_dim(struct IDPair *id, int size);
void func_decl(enum SymbolType type, struct IDPair *id, struct AttrList *arg_list);
void func_def(enum SymbolType type, struct IDPair *id, struct AttrList *arg_list);
struct Attribute *make_string(const char *str);
struct Attribute *make_int(const int val);
struct Attribute *make_float_lit(const double lfval);
struct Attribute *make_bool(const int boolval);
void const_decl(enum SymbolType type, struct IDPair *id, struct Attribute *lt);
struct TypeInfo *logic_op(struct TypeInfo *lhs, struct TypeInfo *rhs);
struct TypeInfo *relation_op(struct TypeInfo *lhs, struct TypeInfo *rhs);
struct TypeInfo *arith_op(struct TypeInfo *lhs, struct TypeInfo *rhs);
struct TypeInfo *modulo_op(struct TypeInfo *lhs, struct TypeInfo *rhs);
struct TypeInfo *negate_op(struct TypeInfo *opr);
struct TypeInfo *not_op(struct TypeInfo *opr);
struct TypeInfo *get_scaler_literal_type(struct Attribute *lt);
struct AttrList *push_param(struct AttrList *param_list, struct TypeInfo *param);
struct TypeInfo *func_invoke(struct IDPair *id, struct AttrList *param_list);
struct TypeInfo *identifier_expr(struct IDPair *id);
struct ArrayRef *make_aref(struct IDPair *id);
struct ArrayRef *array_ref(struct ArrayRef *aref, struct TypeInfo *idx);
struct TypeInfo *get_array_elem_type(struct ArrayRef *aref);
struct Assignment *scaler_assignment(struct IDPair *id, struct TypeInfo *expr);
struct TypeInfo *assignment_expr(struct Assignment *as);
void scaler_var_decl(enum SymbolType type, struct IDPair *id);
void scaler_var_def(enum SymbolType type, struct Assignment *as);
struct AttrList *push_elem(struct AttrList *elem_list, struct TypeInfo *elem);
struct Assignment *array_assignment(struct IDPair *id, struct AttrList *array_literal);
void array_var_def(enum SymbolType type, struct Assignment *as);
void array_var_decl(enum SymbolType type, struct IDPair *id);
struct TypeInfo *array_ref_assignment(struct ArrayRef *aref, struct TypeInfo *expr);
void check_cond(struct TypeInfo *expr);
void check_return(struct IDPair *id);
void return_stmt(struct TypeInfo *ret_type);
void check_jump();
#endif
