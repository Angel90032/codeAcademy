#include <stdio.h>
#include <stdlib.h>
#pragma once


typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t{
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;


/*dobavqne na element v dyrvo*/
treeNode_t *insert (int);

/*obhojdane na dyrvo*/
void preorder(treeNode_t *n);

/*tyrsene na element*/
treeNode_t *search_iter(treeNode_t *t, int n);

treeNode_t *search(int d);

/*premahvane na element ot dyrvo*/
int del(int n);

