/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>

int sumFromTo(int x , int y);

int main(void){
    int a, b;
    printf("Enter 2 int numbers:\n");
    scanf("%i %i",&a,&b);
    printf("The result is %i\n",sumFromTo(a,b));
    return 0;
}

int sumFromTo(int x, int y){
    int mySum = 0;
    int z;

    for (x; x < y ; x++){
        mySum += x;
    }

    return mySum;
}
