/*Можете ли да умножите пойнтер по пойнтер? - не.
При тази декларация колко пойнтера имаме:
int *p, k; 
1*/ 

#include <stdio.h>


int main(void){
    int *p, *k;
    int a = 5;
    int b = 10;
    *p = &a;
    *k = &b;
    printf("%d",(p*k));
}