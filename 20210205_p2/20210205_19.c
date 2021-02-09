/*Задача 19 Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?)*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int arrMultiplier( int A[],int B[],int len);


int main(void){
    int arrA[10];
    int arrB[10];
    int size = sizeof(arrA) / sizeof(arrA[0]);
    arrMultiplier(arrA,arrB,size);

    return 0;
}


int arrMultiplier( int A[],int B[],int len){
    int index = 0;
    srand(time(0));
    while(index < len){
        
        A[index] = (rand() % 20) +1;
        B[index] = (rand() % 20) +1;
        int result = A[index] * B[index];
        printf("Multiplying %i by %i and the result is = %i\n",A[index],B[index],result);
        index++;
    }
}