/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0
до 1000
е просто.*/

#include <stdio.h>

void primeNumbs(int arr[],int limit);

int main(void){
    void (*p)(int arr[],int l);
    p = primeNumbs;
    int myArr[500];
    int myLimit;
    printf("Enter your max number\n");
    scanf("%i",&myLimit);
    (*p)(myArr,myLimit);

    return 0;
}

void primeNumbs(int arr[],int limit){
    int *p = arr;
    int currentNum;
    int index;
    int wholeDividerCounter = 0;
    int *pWholeNumber = &wholeDividerCounter;
    int arrL = 0;

    for (currentNum = 1; currentNum <= limit; currentNum ++){
        *pWholeNumber = 0;
        for (index = 1; index <= currentNum;index++){
            if (currentNum % index == 0){
                (*pWholeNumber) ++;
                /*printf("Value of the counter is %i\n",*pWholeNumber);*/
            }
        }
        if (*pWholeNumber <= 2){
            arrL++;
            *p = currentNum;
            p++;
        }

    }
    int *pToPrint = arr;
    int *pLastElement = &(arr[arrL-1]);

    while (pToPrint <= pLastElement){
        printf("%d ",*pToPrint);
        pToPrint++;
    }
}

