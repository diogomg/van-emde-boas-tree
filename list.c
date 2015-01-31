#include "list.h"

listNode* initNode(keyType key){
    listNode *node = (listNode*)calloc(1, sizeof(listNode));
    if(!node)
        return NULL;
    node->key = key;
    return node;
}

int listIsEmpty(listNode **node){
    return *node ? 1 : 0;
}

listNode* member(listNode **node, keyType key){
    listNode *aux = *node;

    if(*node == NULL)
        return NULL;
    do{
        if(aux->key == key)
            return aux;
        aux = aux->next;
    }while(aux != *node);
    return NULL;
}

void insertAfter(listNode **node, keyType key){
    listNode *new_node = initNode(key);
    if(listIsEmpty(node)){
        new_node->prev = *node;
        new_node->next = (*node)->next;
        (*node)->next->prev = new_node;
        (*node)->next = new_node;
    }
    else{
        new_node->next = new_node;
        new_node->prev = new_node;
        (*node) = new_node;
    }
}

void insertBefore(listNode **node, keyType key){
    listNode *new_node = initNode(key);
    if(listIsEmpty(node)){
        new_node->next = *node;
        new_node->prev = (*node)->prev;
        ((*node)->prev)->next = new_node;
        (*node)->prev = new_node;
    }
    else{
        new_node->next = new_node;
        new_node->prev = new_node;
        (*node) = new_node;
    }
}

void removeByKey(listNode **node, keyType key){
    listNode *aux = member(node, key);
    if(aux == NULL)
        return;
    if(aux == *node && aux->next == *node){
        *node = NULL;
    }
    else{
        aux->prev->next = aux->next;
        aux->next->prev = aux->prev;
    }
    free(aux);
}

void printInOrder(listNode *node){
    listNode *aux = node;
    if(!aux)
        return;
    do{
        printf("add: %p\tkey: %d\tprev: %p\tnext: %p\n", aux, aux->key, aux->prev, aux->next);
        aux = aux->next;
    }while(aux != node);
}

void printReverse(listNode *node){
    listNode *aux = node;
    if(!aux)
        return;
    do{
        printf("add: %p\tkey: %d\tprev: %p\tnext: %p\n", aux, aux->key, aux->prev, aux->next);
        aux = aux->prev;
    }while(aux != node);
}

void merge(listNode **first_list, listNode **second_list){
    (*first_list)->next = *second_list;
    (*second_list)->prev->next = (*first_list)->prev;
    (*first_list)->prev->prev = (*second_list)->prev;
    (*second_list)->prev = *first_list;
}
