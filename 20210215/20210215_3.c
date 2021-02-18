/*Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/

#include <stdio.h>

int main(void){
    char a = 'A';
    int x = 10;
    float z = 20.50;

    char *pA = &a;
    int *pX = &x;
    float *pZ = &z;

    return 0;
}