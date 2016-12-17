#include "symbol.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define SYM_INIT_SIZE 64

extern struct SymbolTable st;
void init_symbol_table()
{
    st.data = malloc(sizeof(struct SymbolTable) * SYM_INIT_SIZE);
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
int *mk_array(int array_dim, ...)
{
    va_list va;
    int *array_indexes = malloc(sizeof(int) * array_dim);
    va_start(va, array_dim);
    for (int i = 0; i < array_dim; i++) {
        array_indexes[i] = va_arg(va, int);
    }
    va_end(va);
    return array_indexes;
}
void enlarge_space()
{
    struct SymbolEntry *new_data = malloc(2 * st.capacity * sizeof(struct SymbolTable));
    memcpy(new_data, st.data, st.capacity);
    free(st.data);
    st.data = new_data;
    st.capacity = 2 * st.capacity;
}
int add_entry(const char *name, enum SymbolKind kind, enum SymbolType type, int array_dim, int *array_indexes, void *attr)
{
    if (st.size == st.capacity) {
        enlarge_space();
    }
    struct SymbolEntry *new_entry = &st.data[st.size];
    strncpy(new_entry->name, name, 33);
    new_entry->kind = kind;
    new_entry->type = type;
    new_entry->attr = attr;
    new_entry->array_dim = array_dim;
    new_entry->array_indexes = array_indexes;
    new_entry->level = st.curr_level;
    new_entry->level_offset = st.size;

    st.size++;
    return 0;
}
struct SymbolEntry *find_entry(const char *name)
{
    for (int i = st.size - 1; i >= 0; i--) {
        if (strcmp(st.data[i].name, name) == 0) {
            return &st.data[i];
        }
    }
    return NULL;
}
static char *kind_str(enum SymbolKind kind)
{
    switch (kind) {
        case S_FUNC:
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
        default:
            return NULL;
    }
}
static char *scope_str(enum ScopeType type)
{
    switch (type) {
        case S_GLOBAL:
            return "global";
        case S_LOCAL:
            return "local";
        default: 
            return NULL;
    }
}
static void print_array_str(int array_dim, int *array_indexes)
{
    for (int i = 0; i < array_dim; i++) {
        printf("[%d]", array_indexes[i]);
    }
}
static char *attr_str(void *attr)
{
    return "";
}
static void print_entry(struct SymbolEntry *e)
{
    printf("%-8s\t%s\t%d(%s)\t%s", e->name, kind_str(e->kind), e->level, scope_str(e->level), type_str(e->type));
    print_array_str(e->array_dim, e->array_indexes);
    putchar('\n');
}
void print_table()
{
    printf("Name\t\tKind\t\tLevel\t\tType\tAttribute\n");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < st.size; i++) {
        print_entry(&st.data[i]);
    }
}
