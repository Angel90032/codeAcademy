/*Задача 17. Напишете програма за умножение на два двумерни
масиви, елемент по елемент.*/

#include <stdio.h>


int arrayMultiplier(int arr1[][5], int arr2[][5], int lenX,int lenY);

int main(void){
    int myArr1[2][5] = {{10,20,30,40,50},{60,70,80,90,100}};
    int myArr2[2][5] = {{2,4,6,8,10},{1,3,5,7,9}};
    arrayMultiplier(myArr1,myArr2,2,5);
    return 0;
}

int arrayMultiplier(int arr1[][5], int arr2[][5],int lenX,int lenY){
    int x,y;

    for (int x = 0; x < lenX;x++){
        for (y = 0; y < lenY;y++){
            int arr1member = arr1[x][y];
            int arr2mmber = arr2[x][y];
            int result =  arr1member * arr2mmber;
            printf("%i\n",result);
        }
    }
}