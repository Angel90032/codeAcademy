/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете 1. */


#include <stdio.h>

int linSearch(int a[], int l, int d);

int main(void){
    int myArr[] = {1,2,3,4};
    int myL = 4;
    int d = 4;
    linSearch(myArr,myL,d);
    return 0;
}

int linSearch(int a[],int l, int d){
    int index;
    int isFound = 1;
    while(index < l){
        if (a[index] == d){
            printf("The number is %i and its position is %i\n",a[index],index);
            return 0;
        }
        index++;
    }
    printf("No luck with it\n");
    return 1;    
    
}
    