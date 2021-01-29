#include <stdio.h>

double area(void);


int main(void){
    printf("My result is %lf\n",area());


}

double area(void){
    double valueOfPi = 3.14;
    double myRadius;
    printf("Enter a radius:\n");
    scanf("%lf",&myRadius);
    double result = (valueOfPi * myRadius * myRadius);
    return result;


}