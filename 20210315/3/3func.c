#include "tree.h"


int del(int n){
treeNode_t *current = search(n);
treeNode_t *parent = current;
    if(current->right == NULL && current->left != NULL){
        printf("del =%d\n", current->left->data);
        current = current->left;
        /*Sleep(100000);*/
        free(current);
        parent->left = NULL;

    }else if(current->right != NULL && current->left == NULL){
        current = current->right;
        free(current);
        parent->right = NULL;
    }
    return 0;
}


treeNode_t *search(int d){
    treeNode_t *current = root;
    printf("Visiting elements: ");
    while (current->data != d){
        if (current != NULL){
            printf("%d",current->data);
        }
        if (current->data > d){
            current = current->left;
        }else{
            current = current->right;
        }
        if (current == NULL){
            return NULL;
        }


    }
    return current;
}


treeNode_t *search_iter(treeNode_t *t, int n){
    while((t!=NULL) && (t->data != n)){
        if (t->data < n){
            t = t->right;
        }else {
            t = t->left;
        }
    }
    return t;
}


void preorder(treeNode_t *n){
    if (n){
        printf("%d\t",n->data);
        preorder(n->left);
        preorder(n->right);
    }
}


treeNode_t *insert (int d){
    treeNode_t * tmp = (treeNode_t*)malloc(sizeof(treeNode_t));
    treeNode_t *current= NULL;
    treeNode_t *parent = NULL;

    tmp->data = d;
    tmp->right = NULL;
    tmp->left = NULL;
    
    if(NULL == root){
        root = tmp;
    }else{
        current = root;
        while(1){
            parent = current;
            if (d < parent->data){
                current = current->left;
                if(current == NULL){
                    parent->left = tmp;
                    return tmp;
                }
            }else{
                current = current->right;
                if (current == NULL){
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
    return tmp;
}

    
    
