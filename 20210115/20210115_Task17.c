#include <stdio.h>

const double d_valueOfPi = 3.141593;
void calculate (double r);
void calculateTwo(double d_A, double d_B);

int main(void){

    calculate(1);
    calculate(1.5);
    calculate(13);
    calculateTwo(1,1);
    calculateTwo(20,10);
}

void calculate (double r){
    double result = d_valueOfPi * r * r;
    printf("%lf\n",result);
}

void calculateTwo(double d_A, double d_B){
    double result = d_valueOfPi * d_A * d_B;
    printf("%lf\n",result);

}