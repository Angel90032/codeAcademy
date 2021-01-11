#include <stdio.h>

int main(){
    int mask = 715827882; /* 0b00101010101010101010101010101010   */
    int myDigit = 1412;
    int result = myDigit & mask;
    printf("%d",result);

}