/* Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не. */

#include <stdio.h>

int oddOrEvenChecker(int x);

int main(){
    printf("Enter a number:\n");
    int myNumber;
    scanf("%i",&myNumber);
    int result = oddOrEvenChecker(myNumber);

    if ( result == 0){
        printf("The number is even.\n");
    }else{
        printf("The number is odd.\n");
    }

    return 0;
}

int oddOrEvenChecker(int x){
    return( x % 2 == 0 ? 0:1);
}