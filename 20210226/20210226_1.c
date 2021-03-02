/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/


#include <stdio.h>


typedef struct {
    char a;
    int x;
}t_struct;

int main(void){
    t_struct myStruct = {'A',10};
    printf("%c %i",myStruct.a,myStruct.x);
}