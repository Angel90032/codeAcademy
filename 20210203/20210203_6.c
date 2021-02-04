/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a --*b; *a = *a --*b). */

#include <stdio.h>


void my_swap(int a,int b);


int main(void){
    my_swap(50,70);
    return 0;
}

void my_swap(int a,int b){
    printf("Original value of a is %i and of b is %i\n",a,b);
    a = a+b;   
    b = a-b;    
    a = a-b;
    printf("After the changes value of a is %i and of b is %i\n",a,b);
}