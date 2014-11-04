#include "veb.h"

int main(){
    int u = 2, i, key;
    vEB *V = NULL;
    /*V = vEB_tree_insert(V, 2, u);
    V = vEB_tree_insert(V, 3, u);
    V = vEB_tree_insert(V, 4, u);
    V = vEB_tree_insert(V, 5, u);
    V = vEB_tree_insert(V, 7, u);
    V = vEB_tree_insert(V, 14, u);
    V = vEB_tree_insert(V, 15, u);
    //vEB_tree_print_number(V);
    printf("%d\n", vEB_tree_member(V, 2));
    printf("%d\n", vEB_tree_member(V, 3));
    printf("%d\n", vEB_tree_member(V, 4));
    printf("%d\n", vEB_tree_member(V, 5));
    printf("%d\n", vEB_tree_member(V, 7));
    printf("%d\n", vEB_tree_member(V, 14));
    printf("%d\n", vEB_tree_member(V, 15));*/
    V = vEB_tree_insert(V, 0, u);
    printf("%d\n", vEB_tree_member(V, 1));
    return 0;
}
