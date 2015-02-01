#include <stdlib.h>

#include "veb.h"
#include "greatest.h"

TEST insert_a_min_value_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    PASS();
}

TEST insert_a_max_value_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 1, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 1);

    PASS();
}


TEST insert_two_values_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);

    PASS();
}

TEST insert_a_value_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST insert_two_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST insert_three_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 1, u);
    V = vEB_tree_insert(V, 2, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 1);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST insert_four_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 3, 1, u);
    V = vEB_tree_insert(V, 2, 1, u);
    V = vEB_tree_insert(V, 1, 1, u);
    V = vEB_tree_insert(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 1);
    ASSERT(vEB_tree_elements(V, 3) == 1);

    PASS();
}

TEST insert_two_equal_values_in_a_tree_tam_2 (){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 2);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    PASS();
}

TEST insert_three_equal_values_in_a_tree_tam_4 (){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 2, 1, u);
    V = vEB_tree_insert(V, 2, 1, u);
    V = vEB_tree_insert(V, 2, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 3);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST insert_two_equals_values_among_others_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 1, u);
    V = vEB_tree_insert(V, 1, 1, u);
    V = vEB_tree_insert(V, 2, 1, u);
    V = vEB_tree_insert(V, 2, 1, u);
    V = vEB_tree_insert(V, 3, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 2);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 1);

    PASS();
}

TEST remove_a_value_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    V = vEB_tree_delete(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    PASS();
}

TEST remove_two_values_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 2, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);

    V = vEB_tree_delete(V, 0, 1, u);
    V = vEB_tree_delete(V, 1, 2, u);

    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    PASS();
}

TEST remove_a_value_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_delete(V, 0, 1, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST remove_two_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 2, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_delete(V, 0, 1, u);
    V = vEB_tree_delete(V, 1, 2, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST remove_three_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 3, u);
    V = vEB_tree_insert(V, 2, 5, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 1);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_delete(V, 0, 1, u);
    V = vEB_tree_delete(V, 1, 3, u);
    V = vEB_tree_delete(V, 2, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST remove_four_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 3, u);
    V = vEB_tree_insert(V, 2, 4, u);
    V = vEB_tree_insert(V, 3, 5, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 1);
    ASSERT(vEB_tree_elements(V, 3) == 1);

    V = vEB_tree_delete(V, 0, 1, u);
    V = vEB_tree_delete(V, 1, 3, u);
    V = vEB_tree_delete(V, 2, 4, u);
    V = vEB_tree_delete(V, 3, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    PASS();
}

TEST remove_four_values_in_a_tree_tam_16 ( ){

    int u = 16;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 4, u);
    V = vEB_tree_insert(V, 7, 6, u);
    V = vEB_tree_insert(V, 15, 8, u);
    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 0);
    ASSERT(vEB_tree_elements(V, 5) == 0);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 1);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 0);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 1);

    V = vEB_tree_delete(V, 0, 1, u);
    V = vEB_tree_delete(V, 1, 4, u);
    V = vEB_tree_delete(V, 7, 6, u);
    V = vEB_tree_delete(V, 15, 8, u);

    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 0);
    ASSERT(vEB_tree_elements(V, 5) == 0);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 0);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 0);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 0);

    PASS();
}

TEST remove_two_equals_values_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 1, 1, u);
    V = vEB_tree_insert(V, 1, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 2);

    V = vEB_tree_delete(V, 1, 1, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 1);

    V = vEB_tree_delete(V, 1, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    PASS();
}

TEST remove_two_equals_values_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 1, 1, u);
    V = vEB_tree_insert(V, 1, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 2);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_delete(V, 1, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_delete(V, 1, 1, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    PASS();
}

TEST remove_two_equals_values_in_a_tree_tam_16(){

    int u = 16;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 7, 1, u);
    V = vEB_tree_insert(V, 7, 2, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 0);
    ASSERT(vEB_tree_elements(V, 5) == 0);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 2);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 0);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 0);

    V = vEB_tree_delete(V, 7, 1, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 0);
    ASSERT(vEB_tree_elements(V, 5) == 0);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 1);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 0);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 0);


    V = vEB_tree_delete(V, 7, 2, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 0);
    ASSERT(vEB_tree_elements(V, 5) == 0);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 0);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 0);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 0);

    PASS();
}

TEST remove_two_equals_values_among_others_in_a_tree_tam_2(){

    int u = 2;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 0, 2, u);
    V = vEB_tree_insert(V, 0, 3, u);
    ASSERT(vEB_tree_elements(V, 0) == 3);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    V = vEB_tree_insert(V, 1, 4, u);
    V = vEB_tree_insert(V, 1, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 3);
    ASSERT(vEB_tree_elements(V, 1) == 2);

    V = vEB_tree_delete(V, 1, 5, u);
    ASSERT(vEB_tree_elements(V, 0) == 3);
    ASSERT(vEB_tree_elements(V, 1) == 1);

    V = vEB_tree_delete(V, 1, 4, u);
    ASSERT(vEB_tree_elements(V, 0) == 3);
    ASSERT(vEB_tree_elements(V, 1) == 0);

    PASS();
}

TEST remove_two_equals_values_among_others_in_a_tree_tam_4(){

    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_insert(V, 1, 2, u);
    V = vEB_tree_insert(V, 1, 3, u);
    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 2);
    ASSERT(vEB_tree_elements(V, 2) == 0);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_insert(V, 2, 4, u);
    V = vEB_tree_insert(V, 2, 5, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 2);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 0);

    V = vEB_tree_insert(V, 3, 6, u);
    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 2);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 1);

    V = vEB_tree_delete(V, 1, 2, u);

    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 1);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 1);

    V = vEB_tree_delete(V, 1, 3, u);
    ASSERT(vEB_tree_elements(V, 0) == 1);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 1);

    PASS();
}

TEST remove_two_equals_values_among_others_in_a_tree_tam_16(){

    int u = 16;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 2, 1, u);
    V = vEB_tree_insert(V, 2, 2, u);
    V = vEB_tree_insert(V, 4, 3, u);
    V = vEB_tree_insert(V, 4, 4, u);
    V = vEB_tree_insert(V, 5, 5, u);
    V = vEB_tree_insert(V, 7, 6, u);
    V = vEB_tree_insert(V, 7, 7, u);
    V = vEB_tree_insert(V, 9, 8, u);
    V = vEB_tree_insert(V, 15, 9, u);

    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 2);
    ASSERT(vEB_tree_elements(V, 5) == 1);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 2);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 1);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 1);

    V = vEB_tree_delete(V, 7, 6, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 2);
    ASSERT(vEB_tree_elements(V, 5) == 1);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 1);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 1);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 1);

    V = vEB_tree_delete(V, 7, 7, u);
    ASSERT(vEB_tree_elements(V, 0) == 0);
    ASSERT(vEB_tree_elements(V, 1) == 0);
    ASSERT(vEB_tree_elements(V, 2) == 2);
    ASSERT(vEB_tree_elements(V, 3) == 0);
    ASSERT(vEB_tree_elements(V, 4) == 2);
    ASSERT(vEB_tree_elements(V, 5) == 1);
    ASSERT(vEB_tree_elements(V, 6) == 0);
    ASSERT(vEB_tree_elements(V, 7) == 0);
    ASSERT(vEB_tree_elements(V, 8) == 0);
    ASSERT(vEB_tree_elements(V, 9) == 1);
    ASSERT(vEB_tree_elements(V, 10) == 0);
    ASSERT(vEB_tree_elements(V, 11) == 0);
    ASSERT(vEB_tree_elements(V, 12) == 0);
    ASSERT(vEB_tree_elements(V, 13) == 0);
    ASSERT(vEB_tree_elements(V, 14) == 0);
    ASSERT(vEB_tree_elements(V, 15) == 1);

    PASS();
}

SUITE( insert ){
    RUN_TEST( insert_a_min_value_in_a_tree_tam_2 );
    RUN_TEST( insert_a_max_value_in_a_tree_tam_2 );
    RUN_TEST( insert_two_values_in_a_tree_tam_2 );
    RUN_TEST( insert_a_value_in_a_tree_tam_4 );
    RUN_TEST( insert_two_values_in_a_tree_tam_4 );
    RUN_TEST( insert_three_values_in_a_tree_tam_4 );
    RUN_TEST( insert_four_values_in_a_tree_tam_4 );
    RUN_TEST( insert_two_equal_values_in_a_tree_tam_2 );
    RUN_TEST( insert_three_equal_values_in_a_tree_tam_4 );
    RUN_TEST( insert_two_equals_values_among_others_in_a_tree_tam_4 );
}

SUITE( delete ){
    RUN_TEST( remove_a_value_in_a_tree_tam_2 );
    RUN_TEST( remove_two_values_in_a_tree_tam_2 );
    RUN_TEST( remove_a_value_in_a_tree_tam_4 );
    RUN_TEST( remove_two_values_in_a_tree_tam_4 );
    RUN_TEST( remove_three_values_in_a_tree_tam_4 );
    RUN_TEST( remove_four_values_in_a_tree_tam_4 );
    RUN_TEST( remove_four_values_in_a_tree_tam_16 );
    RUN_TEST( remove_two_equals_values_in_a_tree_tam_2 );
    RUN_TEST( remove_two_equals_values_in_a_tree_tam_4 );
    RUN_TEST( remove_two_equals_values_in_a_tree_tam_16 );
    RUN_TEST( remove_two_equals_values_among_others_in_a_tree_tam_2 );
    RUN_TEST( remove_two_equals_values_among_others_in_a_tree_tam_4 );
    RUN_TEST( remove_two_equals_values_among_others_in_a_tree_tam_16 );
}

GREATEST_MAIN_DEFS();

int main( int argc, char** argv ){

    GREATEST_MAIN_BEGIN();
    RUN_SUITE( insert );
    RUN_SUITE( delete );
    GREATEST_MAIN_END();
}
