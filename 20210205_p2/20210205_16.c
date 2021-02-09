/*Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/

#include <stdio.h>

int arrTimesArr(int arrA[],int arrB[],int len);


int main(void){
    int myArr[5] = {10,20,30,40,50};
    int yourArr[5] = {2,4,6,8,10};
    arrTimesArr(myArr,yourArr,5);
    return 0;
}


int arrTimesArr(int arrA[],int arrB[],int len){
    int index = 0;

    while (index < len){
        int result = arrA[index] * arrB[index];
        printf("%i\n",result);
        index++;
    }

}