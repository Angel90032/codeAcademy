#include "tree.h"

treeNode_t *root = NULL;
treeNode_t *z = NULL;

int main(void){
    int arr1[11] = {1,3,5,6,7,8,10,11,12,13,14};
    int i;

    for (i = 0; i< 11; i++){
        insert(arr1[i]);
    }
    z = root;
    preorder(z);
    z = root;

    del(1);
    /*root = z;
    del(7);
    root = z;
    del(12);
    root = z;
    del(14);
    root = z;*/
    preorder(z);

    return 0;
}


