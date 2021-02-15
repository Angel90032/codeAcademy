/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).*/

#include <stdio.h>

int main(void){
    /*int *p = &a;*/
    int a = 34;
    int *p = &a;
    
    printf("address of p is %p, value of p is %i",p,*p);
    return 0;
}