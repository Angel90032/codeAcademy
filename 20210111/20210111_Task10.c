#include <stdio.h>

int main(){
    int myIndex = 5;
    int myNumber = 567;
    int mask = 2147483647; /* 0b 0111 1111 1111 1111 1111 1111 1111 1111*/
    int shiftedMask = mask << myIndex;
    printf("Shifted mask is: %d",shiftedMask);
    shiftedMask = ~(shiftedMask);
    int result = myNumber & shiftedMask;
    printf("/n%d",result);
    return 0;
}