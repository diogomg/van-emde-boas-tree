#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct vEB{
    int u;
    int min, max;
    listNode *listMin, *listMax;
    struct vEB *summary, **cluster;
}vEB;

int high(int x, int u);

int low(int x, int u);

int vEB_tree_extract_min(vEB **veb, int u);

int vEB_tree_decrease_key(vEB **veb, int old_cost, int new_cost, int ver, int u);

vEB* vEB_tree_member(vEB *veb, int x);

int vEB_tree_Minimum(vEB *veb);

int vEB_tree_Minimum_vertex(vEB *veb);

int vEB_tree_Maximum(vEB *veb);

int vEB_tree_elements(vEB *veb, int x);

vEB* vEB_tree_insert(vEB *veb, int value, int key, int u);

vEB* vEB_tree_add(vEB *veb, int x, listNode *list, int u);

vEB* vEB_tree_delete(vEB *veb, int x, int ver, int u);

void vEB_tree_print(vEB *veb);
