/*Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

#include <stdio.h>
#include <stdlib.h>



int main(void){
    int *arr;
    arr = (int*) calloc(5,sizeof(int));
    return 0;
}