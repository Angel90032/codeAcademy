#include <stdio.h>

int obarniBitNa(int digit, int index);

int main(void){
    int myDigit = 122;
    int myIndex = 5;
    int res = obarniBitNa(myDigit,myIndex);
    printf("%d",res);

}

int obarniBitNa(int digit, int index){
    int mask = 1;
    int shiftedMask = mask << index;
    int result = digit ^ shiftedMask;
    return result;
}