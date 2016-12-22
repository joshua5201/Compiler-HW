#ifndef SYMBOL_H
#define SYMBOL_H

#define SYM_INIT_SIZE 64
#define ARR_INIT_SIZE 4

enum SymbolKind {
    NULL_KIND = 0,
    S_FUNC,
    S_FUNC_DEFINED,
    S_PARAM,
    S_VAR,
    S_CONST
};

enum SymbolType {
    NULL_TYPE = 0,
    S_INT,
    S_FLOAT,
    S_DOUBLE,
    S_BOOL,
    S_STRING,
    S_VOID
};
enum ScopeType { S_GLOBAL = 0, S_LOCAL };

struct ArraySize {
    int size;
    struct ArraySize *next;
};
struct TypeInfo {
    enum SymbolType type;
    struct ArraySize *array_sizes;
    struct ArraySize *array_tail;
    int array_dim;
};
struct IDPair {
    char name[33];
    struct TypeInfo type_info;
};
struct ArrayRef {
    struct IDPair *id;
    int referenced;
    int error;
};

struct TypeInfo;
struct AttrList;
enum AttrType {
    S_ARG = 0,
    S_ATTR_PARAM,
    S_CONST_INT,
    S_CONST_DOUBLE,
    S_CONST_STR,
    S_CONST_BOOL,
    S_ELEM,
    S_LIST
};
struct AttrList {
    struct Attribute *head;
    struct Attribute *tail;
};
union AttrData {
    int val;
    double lfval;
    const char *str;
    struct IDPair arg;
    struct TypeInfo param;
    struct TypeInfo elem;
    struct AttrList sublist;
};
struct Attribute {
    enum AttrType type;
    struct Attribute *next;
    union AttrData data;
};
struct Assignment {
    struct IDPair *id;
    struct TypeInfo *expr;
    struct AttrList *array;
};
struct SymbolEntry {
    struct IDPair id;
    int level;
    int level_offset;
    enum SymbolKind kind;
    struct Attribute *attributes;
};
struct SymbolTable {
    struct SymbolEntry *data;
    int size;
    int capacity;
    int curr_level;
};

struct SymbolTable st;
void init_symbol_table();
void push_scope();
void pop_scope();
struct SymbolEntry *add_entry(struct IDPair *id);
struct SymbolEntry *find_entry(const struct IDPair *id);
struct SymbolEntry *find_entry_in_scope(const struct IDPair *id);
void print_table();

/* error handling */
struct ErrorEntry {
    const char *msg;
    struct ErrorEntry *next;
};
struct ErrorTable {
    struct ErrorEntry *head;
    struct ErrorEntry *tail;
};
int has_sem_error;
struct ErrorTable et;
void push_error(const char *msg);
void print_error();
#endif
