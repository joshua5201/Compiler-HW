#ifndef SYMBOL_H
#define SYMBOL_H
enum SymbolKind {
    S_FUNC = 0,
    S_PARAM,
    S_VAR,
    S_CONST
};
enum SymbolType {
    S_INT = 0,
    S_FLOAT,
    S_DOUBLE,
    S_BOOL,
    S_STRING
};
enum ScopeType { S_GLOBAL = 0, S_LOCAL };
struct SymbolEntry {
    char name[33];
    int level;
    int level_offset;
    enum SymbolKind kind;
    enum SymbolType type;
    int array_dim;
    int *array_indexes;
    void *attr;
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
int *mk_array(int array_dim, ...);
int add_entry(const char *name, enum SymbolKind kind, enum SymbolType type, int array_dim, int *array_indexes, void *attr);
struct SymbolEntry *find_entry(const char *name);
void print_table();
/* for testing */
void enlarge_space();
#endif
