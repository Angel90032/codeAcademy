/*Задача 4.
Заделяне и освобождаване на памет
malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

#include <stdio.h>
#include <stdlib.h>

int myMemory(int *arr,int len);


int main(void){
    int size;
    int *arr;
    printf("Enter the size of your arr:\n");
    scanf("%i",&size);
    myMemory(arr,size);

    
    
    return 0;
}

int myMemory(int *arr,int len){
    arr = (int*) malloc(len * sizeof(int));
    int *p = arr;
    int *pLast = (p+(len-1));
    while (p <= pLast){
        printf("Enter a number:\n");
        int elementToAdd = 0;
        scanf("%i",&elementToAdd);
        *p = elementToAdd;
        p++;
    }
    int *pToPrint = arr;
    while(pToPrint <= pLast ){
        printf("%i ",*pToPrint);
        pToPrint++;
    }
    free(arr);
    return 0;
}
