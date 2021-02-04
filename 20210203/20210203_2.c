/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край. */

#include <stdio.h>


int printArr(int a[], int l);


int main(void){
    int myIntArr[] = {10,20,30};
    int myL = 3;
    printArr(myIntArr,myL);
    return 0;
}

int printArr(int a [],int l){
    int index;

    for (index = 0; index < l;index++){
        printf("The %i element is %i\n",index,a[index]);
    }
}