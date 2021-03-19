/*Задача 3.
Направете едносвързан списък, съдържащ числата 1
14 и
принтирайте петия елемент от края му.*/


#include "myH.h"

node_t *start;

int main(void){
    int i;
    int counter;
    for (i = 1; i < 15; i++){
        add(i);
    }
    printList();
    node_t *q = start;
    for (counter = 0; counter < 5; counter++){
        q = q->next;
    }
    printf("\n%i\n",q->data);

    return 0;
}
