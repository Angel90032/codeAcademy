#include <stdio.h>

/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */


void arrayInput(int *arr);


int main(void){
    int myArr[5] = {0};
    arrayInput(myArr);
    
    return 0;
}


void arrayInput(int *arr){
    int elementIndex = 0;
    while (elementIndex < 5){
        printf("Enter your element:\n");
        scanf("%i",&arr[elementIndex]);    
        elementIndex++;
    }

}