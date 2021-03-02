/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по горе начин.*/
#include <stdio.h>
#include <stdlib.h>



typedef struct{
    int x;
    t_myStruct * myPtr;
}t_myStruct;


int main(void){
    t_myStruct var1;
    t_myStruct *myPtr = (t_myStruct*)malloc(20);
    var1.x = 10;
    printf("%i",var1.x);
    
    return 0;
}




