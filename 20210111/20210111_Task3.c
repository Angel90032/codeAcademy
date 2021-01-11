#include <stdio.h>

int iz4istiBitna(int digit, int index);

int main(){
    int someNumber = 35;
    int someIndex = 5;
    int resultToPrint = iz4istiBitna(someNumber,someIndex);
    printf("%d",resultToPrint);
    return 0;
}

int iz4istiBitna(int digit, int index){
    int mask = 1;
    int shiftedMask = mask << index;
    shiftedMask = ~(shiftedMask);
    int result = digit & shiftedMask;
    return result;
}