/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr); */

#include <stdio.h>

char cArray[3];
int iArray[3];
double dArray[3];



int main(){
    printf("Size of cArray = %d\n",sizeof(cArray));
    printf("Size of iArray = %d\n",sizeof(iArray));
    printf("Size of dArray = %d\n",sizeof(dArray));
    return 0;
}