/*Задача 3. Напишете функция, която връща резултат (а+в)*4.*/

#include <stdio.h>

float addTimesFour(float x, float y);

int main(void){
    printf("Enter two float numbers:\n");
    float fOne, fTwo;
    scanf("%f %f",&fOne,&fTwo);
    printf("The result is:%.4f\n",addTimesFour(fOne,fTwo));

    return 0;
}

float addTimesFour(float x, float y){
    return (x + y) * 4;
}