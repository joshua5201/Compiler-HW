#include "symbol.h"
#include <stdio.h>
#include <assert.h>

extern struct SymbolTable st;
static void test_push_scope()
{
    int old_level = st.curr_level;
    push_scope();
    assert(st.curr_level == old_level + 1);
}
static void test_pop_scope()
{
    int old_level = st.curr_level;
    pop_scope();
    assert(st.curr_level == old_level - 1);
}
static void test_entry()
{
    int old_size = st.size;
    add_entry("test", S_VAR, S_INT, 0, NULL, NULL);
    assert(st.size == old_size + 1);
    add_entry("test2", S_FUNC, S_FLOAT, 0, NULL, NULL);
    add_entry("test3", S_CONST, S_INT, 0, NULL, NULL);
    add_entry("test4", S_VAR, S_INT, 0, NULL, NULL);
}
int main(void)
{
    init_symbol_table();
    test_push_scope();
    test_pop_scope();
    test_entry();
}

