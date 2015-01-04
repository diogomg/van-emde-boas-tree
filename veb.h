#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct vEB{
    int u;
    int min, max;
    int contMin, contMax;
    struct vEB *summary, **cluster;
}vEB;

int high(int x, int u);

int low(int x, int u);

//int index(int x, int y, int u);

vEB* vEB_tree_member(vEB *V, int x);

int vEB_tree_Minimum(vEB *V);

int vEB_tree_Maximum(vEB *V);

int vEB_tree_elements(vEB *V, int x);

vEB* vEB_tree_insert(vEB *V, int x, int qtd, int u);

vEB* vEB_tree_delete(vEB *V, int x, int u);

void vEB_tree_print(vEB *V);

void vEB_tree_print_number(vEB *V);
