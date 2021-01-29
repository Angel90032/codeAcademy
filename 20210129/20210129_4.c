/*Задача 4. Напишете функция, която връща резултат a*2 + b*c. */

#include <stdio.h>

float myFunc(float x, float y,float z);

int main(void){
    printf("Enter three float numbers:\n");
    float fOne, fTwo, fThree;
    scanf("%f %f %f",&fOne,&fTwo,&fThree);
    printf("The result is:%.4f\n",myFunc(fOne,fTwo,fThree));

    return 0;
}

float myFunc(float x, float y,float z){
    return (x * 2 + y * z);
}