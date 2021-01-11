#include <stdio.h>

int VzemiBitna(int digit, int index);

int main(){
    int someDigit = 87;
    int someIndex = 3;
    int resultToPrint = VzemiBitna(someDigit,someIndex);

    printf("The value of our index is %d",resultToPrint);
    return 0;
}


int VzemiBitna(int digit, int index){
    int mask = 1;
    int shifted = digit >> index;
    int result = shifted & mask;
    return result;

}