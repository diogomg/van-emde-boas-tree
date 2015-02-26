#include "veb.h"

int high(int x, int u){
    return (int)(x/(int)sqrt(u));
}

int low(int x, int u){
    return (x % (int)sqrt(u));
}

vEB* vEB_tree_member(vEB *veb, int x){

    if(!veb)
        return NULL;
    else if(veb->min == x || veb->max == x)
        return veb;
    else{
        if(veb->cluster)
            return vEB_tree_member(veb->cluster[high(x, veb->u)], low(x, veb->u));
        else
            return NULL;
    }
}

void vEB_tree_print(vEB *veb){
    if(veb){
        printf("min: %d\tmax: %d\tu: %d\n",
        veb->min, veb->max, veb->u);
        printInOrder(veb->listMin);
        printInOrder(veb->listMax);
        if(veb->cluster){
            if(veb->cluster){
                int i=0;
                printf("cluster: ");
                for(i = 0; i < sqrt(veb->u); i++){
                    if(veb->cluster[i])
                        printf("%d\t", i);
                }
                printf("\n");
                for(i = 0; i < sqrt(veb->u); i++){
                    if(veb->cluster[i])
                        vEB_tree_print(veb->cluster[i]);
                }
                printf("\n");
            }
            else{
                printf("cluster: 0\n");
            }
        }
    }
}

int vEB_tree_Minimum(vEB *veb){
    return veb->min;
}

int vEB_tree_Minimum_vertex(vEB *veb){
    return (veb->listMin)->key;
}

int vEB_tree_Maximum(vEB *veb){
    return veb->max;
}

vEB* vEB_tree_add(vEB *veb, int x, listNode *list, int u){

    if(!veb){
        veb = (vEB*)malloc(sizeof(vEB));
        veb->min = veb->max = x;
        veb->u = u;
        veb->listMin = veb->listMax = list;
        if(u > 2){
            veb->summary = NULL;
            veb->cluster = (vEB**)calloc(sqrt(u),sizeof(vEB*));
        }
        else{
            veb->summary = NULL;
            veb->cluster = NULL;
        }
    }
    else if(veb->min == x){
        merge(&(veb->listMin), &list);
        if(veb->max == x){
            veb->listMax = veb->listMin;
        }
    }
    else if(veb->max == x){
        merge(&(veb->listMax), &list);
    }
    else{
        if(x < veb->min){
            if(veb->min == veb->max){
                veb->min = x;
                veb->listMin = list;
                return veb;
            }
            int aux = veb->min;
            veb->min = x;
            x = aux;
            listNode *listAux = veb->listMin;
            veb->listMin = list;
            list = listAux;
        }
        else if(x > veb->max){
            int aux = veb->max;
            veb->max = x;
            x = aux;
            listNode *listAux = veb->listMax;
            veb->listMax = list;
            list = listAux;
            if(veb->min == x)
                return veb;
        }
        if(veb->u > 2){
            if(veb->cluster[high(x, veb->u)] == NULL){
                listNode *node = initNode(1);
                veb->summary = vEB_tree_add(veb->summary, high(x, veb->u),  node, sqrt(veb->u));
            }
            veb->cluster[high(x, veb->u)] =
            vEB_tree_add(veb->cluster[high(x, veb->u)], low(x, veb->u), list, sqrt(veb->u));
        }
    }
    return veb;
}

vEB* vEB_tree_insert(vEB *veb, int value, int key, int u){
    listNode *node = initNode(key);
    veb =  vEB_tree_add(veb, value, node, u);
    return veb;
}


vEB* vEB_tree_delete(vEB *veb, int x, int ver, int u){
    if(veb->min == veb->max){
        if(veb->listMin == NULL || veb->listMax == NULL){
            if(veb->cluster)
                free(veb->cluster);
            free(veb);
            return NULL;
        }
        listNode node = *(veb->listMin);
        removeByKey(&(veb->listMin), ver);
        if(veb->listMin != NULL){
            veb->listMax = veb->listMin;
        }
        else{
            if(veb->cluster)
                free(veb->cluster);
            free(veb);
            return NULL;
        }
    }
    else if(veb->u == 2){
        if(x == 0){
            if(veb->listMin != NULL){
                listNode node = *(veb->listMin);
                removeByKey(&(veb->listMin), ver);
            }
            if(veb->listMin == NULL){
                veb->min = 1;
                veb->listMin = veb->listMax;
            }
        }
        else{
            if(veb->listMax != NULL){
                listNode node = *(veb->listMax);
                removeByKey(&(veb->listMax), ver);
            }
            if(veb->listMax == NULL){
                veb->max = 0;
                veb->listMax = veb->listMin;
            }
        }
    }
    else{
        if(x == veb->min){
            if(veb->listMin != NULL){
                listNode node = *(veb->listMin);
                removeByKey(&(veb->listMin), ver);
            }
            if(veb->listMin == NULL){
                if(veb->summary){
                    int first_cluster = vEB_tree_Minimum(veb->summary);
                    int new_min = vEB_tree_Minimum(veb->cluster[first_cluster]);
                    veb->min = first_cluster * (int)sqrt(veb->u) + new_min;
                    veb->listMin = (veb->cluster[first_cluster])->listMin;
                    (veb->cluster[first_cluster])->listMin = NULL;
                    veb->cluster[first_cluster] =  vEB_tree_delete(veb->cluster[first_cluster], new_min, ver, sqrt(veb->u));
                    if(veb->cluster[first_cluster] == NULL)
                        veb->summary = vEB_tree_delete(veb->summary,   first_cluster, 1, sqrt(veb->u));
                }
                else{
                    veb->min = veb->max;
                    veb->listMin = veb->listMax;
                }
            }
        }
        else if(x == veb->max){
            if(veb->listMax != NULL){
                listNode node = *(veb->listMax);
                removeByKey(&(veb->listMax), ver);
            }
            if(veb->listMax == NULL){
                if(veb->summary){
                    int last_cluster = vEB_tree_Maximum(veb->summary);
                    int new_max = vEB_tree_Maximum(veb->cluster[last_cluster]);
                    veb->max = last_cluster * (int)sqrt(veb->u) + new_max;
                    veb->listMax = veb->cluster[last_cluster]->listMax;
                    veb->cluster[last_cluster]->listMax = NULL;
                    veb->cluster[last_cluster] =    vEB_tree_delete(veb->cluster[last_cluster], new_max, ver, sqrt(veb->u));
                    if(veb->cluster[last_cluster] == NULL)
veb->summary = vEB_tree_delete(veb->summary, last_cluster, 1, sqrt(veb->u));
                }
                else{
                    veb->max = veb->min;
                    veb->listMax = veb->listMin;
                }
            }
        }
        else{
            veb->cluster[high(x, veb->u)] = vEB_tree_delete(veb->cluster[high(x,    veb->u)], low(x, veb->u), ver, sqrt(veb->u));
            if(veb->cluster[high(x, veb->u)] == NULL)
                veb->summary = vEB_tree_delete(veb->summary, high(x, veb->u), 1,  sqrt(veb->u));
        }
    }
    return veb;
}

int vEB_tree_extract_min(vEB **veb, int u){

    if(!*veb)
        return -1;
    int min_value = vEB_tree_Minimum(*veb);
    int min_vertex = vEB_tree_Minimum_vertex(*veb);
    *veb = vEB_tree_delete(*veb, min_value, min_vertex, u);
    return min_vertex;
}

int vEB_tree_decrease_key(vEB **veb, int old_cost, int new_cost, int ver, int u){

    if(!*veb)
        return 1;
    *veb = vEB_tree_delete(*veb, old_cost, ver, u);
    *veb = vEB_tree_insert(*veb, new_cost, ver, u);
    return 0;
}


int vEB_tree_elements(vEB *veb, int x){

    if(!veb)
        return 0;
    else if(veb->min == x)
        return countElements(veb->listMin);
    else if(veb->max == x)
        return countElements(veb->listMax);
    else{
        if(veb->cluster)
            return vEB_tree_elements(veb->cluster[high(x, veb->u)], low(x, veb->u));
        else
            return 0;
    }
}
