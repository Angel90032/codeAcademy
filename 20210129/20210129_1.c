#include <stdio.h>


const float valueOfPi = 3.14;
/*#define VALUE_OF_PI 3.14;*/

float calculateArea(float);

int main(void){
    float ourRadius;
    printf("Enter a radius:\n");
    scanf("%f",&ourRadius);
    float answer = calculateArea(ourRadius);
    printf("Our area is: %f:\n",answer);
    return 0;
    
}

float calculateArea(float r){
    float result = valueOfPi * r * r;
    return result;
}