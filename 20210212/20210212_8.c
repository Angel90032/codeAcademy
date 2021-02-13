#include <stdio.h>
#include <stdlib.h>

/*Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/


int main(void){
    int *arr;
    arr = alloca(10);
    return 0;
}


