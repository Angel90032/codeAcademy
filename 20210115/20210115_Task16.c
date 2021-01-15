#include <stdio.h>

const double d_valueOfPi = 3.141593;
void calculate (double r);

int main(void){

    calculate(1);
    calculate(1.5);
    calculate(13);
}

void calculate (double r){
    double result = d_valueOfPi * r * r;
    printf("%lf\n",result);
}