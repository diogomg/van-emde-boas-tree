#include "veb.h"

int main(){
    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 1, u);
    V = vEB_tree_insert(V, 1, 2, u);
    V = vEB_tree_insert(V, 2, 1, u);

    printf("there are %d elements 0\n", vEB_tree_elements(V, 0));
    printf("there are %d elements 1\n", vEB_tree_elements(V, 1));
    printf("there are %d elements 2\n", vEB_tree_elements(V, 2));
    printf("there are %d elements 3\n\n", vEB_tree_elements(V, 3));

    V = vEB_tree_delete(V, 0, u);
    V = vEB_tree_delete(V, 1, u);
    V = vEB_tree_delete(V, 2, u);

    printf("there are %d elements 0\n", vEB_tree_elements(V, 0));
    printf("there are %d elements 1\n", vEB_tree_elements(V, 1));
    printf("there are %d elements 2\n", vEB_tree_elements(V, 2));
    printf("there are %d elements 3\n\n", vEB_tree_elements(V, 3));
    return 0;
}
