#include <stdio.h>

/*  Между 3 и 7 т.е позиции 4, 5, 6    */

int main(void){
    int mask = 2147483535;      /*0b0111 1111 1111 1111 1111 1111 1000 1111   */
    int myNumb = 1022;
    int result = myNumb & mask;
    printf("%d",result);
}