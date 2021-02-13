/*Задача
1. Да се направи програма , която заделя динамичен масив с брой елементи
зададени от потребителя . За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива*/

#include <stdio.h>
#include <stdlib.h>

int myF(int *arr, int l);

int main(){
    int *pV = NULL;
    unsigned uNumberOfElem = 0;
    printf("How many elements do you want to have in your int arr ?\n");
    scanf("%u",&uNumberOfElem);
    int result = myF(pV,uNumberOfElem);
    printf("\n%i",result);
    
}

int myF(int *arr, int l){
    arr = malloc(l* sizeof(int));
    unsigned uIdx = 0;
    int sum = 0;

    while (uIdx < l){
        /*fflush(stdin);*/
        int elementToAdd;
        printf("Enter an element which will be added to the array:\n");
        scanf("%i",&elementToAdd);
        arr[uIdx] = elementToAdd;
        sum += elementToAdd;
        uIdx++;
    }
    int el;

    for( el = 0; el<l; el ++){
        printf("%i ",arr[el]);
    }
    free(arr);
    return sum;
}
