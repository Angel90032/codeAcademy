/*1.
Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.*/

#include <stdio.h>

#define PI 3.14
#define E 10
#define X 20

int main(void){
    
    float result = PI * E + X;
    printf("%f\n",result);
    return 0;
}