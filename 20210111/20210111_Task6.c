#include <stdio.h>

int main(void){
    int number = 122;
    int index = 5;
    int mask = 1;
    int shiftedMask = mask << index;
    int result = number ^ shiftedMask;
    printf("%d",result);
}