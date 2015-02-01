#include <stdio.h>
#include <stdlib.h>

typedef int keyType;

typedef struct listNode{
    keyType key;
    struct listNode *next;
    struct listNode *prev;
}listNode;

listNode* initNode(keyType);

int listIsEmpty(listNode **node);

listNode* member(listNode **node, keyType key);

void insertAfter(listNode **node, keyType key);

void insertBefore(listNode **node, keyType key);

void removeByKey(listNode **node, keyType key);

void removeFirst(listNode **node);

void printInOrder(listNode *node);

void printReverse(listNode *node);

void merge(listNode **first_list, listNode **second_list);

int countElements(listNode *node);
