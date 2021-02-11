/*Задача
1. Напишете програма , която сумира всички елементи на масив
намиращи се на четна позиция
int
arr [10] = {23, 91, 36, 4, 9, 99, 87, 11, 2,*/


#include <stdio.h>

int myF(int arr[],int l);

int main(void){
    int arr [10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    myF(arr,10);
    return 0;
}


int myF(int arr[],int l){
    int *p = &arr[1];
    int sum = 0;

    while(p < &arr[l]){
        sum += *p;
        printf("%i\n",sum);
        p += 2;

    }

}

