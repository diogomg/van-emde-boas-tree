#include <stdlib.h>

#include "veb.h"
#include "greatest.h"

TEST insert_a_value_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);

    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);
    node = vEB_tree_member(V, 1);
    ASSERT(!node);

    PASS();
}

TEST insert_two_values_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    V = vEB_tree_insert(V, 1, u);

    vEB * node = vEB_tree_member(V, 0);
    ASSERT(node);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    PASS();
}

TEST insert_a_value_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);

    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);
    node = vEB_tree_member(V, 1);
    ASSERT(!node);
    node = vEB_tree_member(V, 2);
    ASSERT(!node);
    node = vEB_tree_member(V, 3);
    ASSERT(!node);

    PASS();
}

TEST insert_two_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    V = vEB_tree_insert(V, 1, u);

    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);
    node = vEB_tree_member(V, 1);
    ASSERT(node);
    node = vEB_tree_member(V, 2);
    ASSERT(!node);
    node = vEB_tree_member(V, 3);
    ASSERT(!node);

    PASS();
}

TEST insert_three_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    V = vEB_tree_insert(V, 1, u);
    V = vEB_tree_insert(V, 2, u);

    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);
    node = vEB_tree_member(V, 1);
    ASSERT(node);
    node = vEB_tree_member(V, 2);
    ASSERT(node);
    node = vEB_tree_member(V, 3);
    ASSERT(!node);

    PASS();
}

TEST insert_four_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    V = vEB_tree_insert(V, 1, u);
    V = vEB_tree_insert(V, 2, u);
    V = vEB_tree_insert(V, 3, u);

    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);
    node = vEB_tree_member(V, 1);
    ASSERT(node);
    node = vEB_tree_member(V, 2);
    ASSERT(node);
    node = vEB_tree_member(V, 3);
    ASSERT(node);

    PASS();
}
SUITE( insert ){
    RUN_TEST( insert_a_value_in_a_tree_tam_2 );
    RUN_TEST( insert_two_values_in_a_tree_tam_2 );
    RUN_TEST( insert_a_value_in_a_tree_tam_4 );
    RUN_TEST( insert_two_values_in_a_tree_tam_4 );
    RUN_TEST( insert_three_values_in_a_tree_tam_4 );
    RUN_TEST( insert_four_values_in_a_tree_tam_4 );
}

GREATEST_MAIN_DEFS();

int main( int argc, char** argv )
{
  GREATEST_MAIN_BEGIN();
  RUN_SUITE( insert );
  GREATEST_MAIN_END();
}
