/*Задача
5 Разширяване на заделена памет с realloc*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int initialSize,newSize;
    int *arr;
    printf("Enter the initial size of your arr:\n");
    scanf("%i",&initialSize);
    arr = (int*) malloc(initialSize *sizeof(int));
    if (NULL == arr){
        printf("Allocation memory error!\n");
        exit(1);
    }

    printf("Now lets increase the size of your arr.\n");
    scanf("%i",&newSize);
    arr = realloc(arr,newSize * sizeof(int));
    if (NULL == arr){
        printf("Reallocation memory error!\n");
        exit(2);
    }
    return 0;
}