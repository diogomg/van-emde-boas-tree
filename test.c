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

TEST remove_a_value_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    PASS();
}

TEST remove_two_values_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_insert(V, 1, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 1, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    PASS();
}

TEST remove_a_value_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    PASS();
}

TEST remove_two_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_insert(V, 1, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 1, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    PASS();
}

TEST remove_three_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_insert(V, 1, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_insert(V, 2, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 1, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 2, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    PASS();
}

TEST remove_four_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_insert(V, 1, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_insert(V, 2, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_insert(V, 3, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 1, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 2, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 3, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    PASS();
}

TEST remove_four_values_in_a_tree_tam_16 ( ){

    int u = 16;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, u);
    vEB *node = vEB_tree_member(V, 0);
    ASSERT(node);

    V = vEB_tree_insert(V, 1, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_insert(V, 7, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_insert(V, 15, u);
    node = vEB_tree_member(V, 1);
    ASSERT(node);

    V = vEB_tree_delete(V, 0, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 1, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 7, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

    V = vEB_tree_delete(V, 15, u);
    node = vEB_tree_member(V, 0);
    ASSERT(!node);

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

SUITE( delete ){
    RUN_TEST( remove_a_value_in_a_tree_tam_2 );
    RUN_TEST( remove_two_values_in_a_tree_tam_2 );
    RUN_TEST( remove_a_value_in_a_tree_tam_4 );
    RUN_TEST( remove_two_values_in_a_tree_tam_4 );
    RUN_TEST( remove_three_values_in_a_tree_tam_4 );
    RUN_TEST( remove_four_values_in_a_tree_tam_4 );
    RUN_TEST( remove_four_values_in_a_tree_tam_16 );
}

GREATEST_MAIN_DEFS();

int main( int argc, char** argv )
{
  GREATEST_MAIN_BEGIN();
  RUN_SUITE( insert );
  RUN_SUITE( delete );
  GREATEST_MAIN_END();
}
