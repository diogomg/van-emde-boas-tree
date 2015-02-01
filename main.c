#include "veb.h"

int main(){
    int u = 4;
    vEB *V = NULL;

    V = vEB_tree_insert(V, 0, 19, u);
    //vEB_tree_print(V);
    printf("%d\n", vEB_tree_elements(V, 0));
    V = vEB_tree_insert(V, 1, 21, u);printf("%d\n", vEB_tree_elements(V, 1));
    //vEB_tree_print(V);
    V = vEB_tree_insert(V, 2, 30, u);printf("%d\n", vEB_tree_elements(V, 2));
    //vEB_tree_print(V);

    V = vEB_tree_insert(V, 1, 32, u);printf("%d\n", vEB_tree_elements(V, 1));
    vEB_tree_print(V);
    /*printf("there are %d elements 0\n", vEB_tree_elements(V, 0));
    printf("there are %d elements 1\n", vEB_tree_elements(V, 1));
    printf("there are %d elements 2\n", vEB_tree_elements(V, 2));
    printf("there are %d elements 3\n\n", vEB_tree_elements(V, 3));*/

    V = vEB_tree_delete(V, 0, u);vEB_tree_print(V);
    /*V = vEB_tree_delete(V, 1, u);
    V = vEB_tree_delete(V, 2, u);

    printf("there are %d elements 0\n", vEB_tree_elements(V, 0));
    printf("there are %d elements 1\n", vEB_tree_elements(V, 1));
    printf("there are %d elements 2\n", vEB_tree_elements(V, 2));
    printf("there are %d elements 3\n\n", vEB_tree_elements(V, 3));
    */
    return 0;
}
