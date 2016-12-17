#include "symbol.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    assert(st.data[st.size - 1].type == S_INT);
    assert(strcmp(st.data[st.size - 1].name, "test4") == 0);
    assert(st.size == 4);
    push_scope();
    add_entry("1_dim_array", S_VAR, S_INT, 1, mk_array(1, 3), NULL);
    assert(st.data[st.size - 1].array_dim == 1);
    assert(st.data[st.size - 1].array_indexes[0] == 3);
    assert(st.data[st.size - 1].level == 1);
    assert(st.data[st.size - 1].level_offset == 4);
    print_table();
    push_scope();
    pop_scope();
    pop_scope();
    push_scope();
    print_table();
    assert(strcmp(st.data[st.size - 1].name, "test4") == 0);
    assert(st.size == 4);
}
static void test_mk_array()
{
    int *array = mk_array(2, 1, 3);
    assert(array[0] == 1);
    assert(array[1] == 3);
    free(array);
    array = mk_array(3, 213, 23, 12);
    assert(array[0] == 213);
    assert(array[1] == 23);
    assert(array[2] == 12);
    free(array);
}
static void test_enlarge_space()
{
    int old_cap = st.capacity;
    enlarge_space();
    assert(old_cap * 2 == st.capacity);
}
int main(void)
{
    init_symbol_table();
    test_push_scope();
    test_pop_scope();
    test_mk_array();
    test_entry();
    test_enlarge_space();
}

