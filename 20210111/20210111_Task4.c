#include <stdio.h>

int vdigniBitNa (int digit, int index);

int main(){
    int myDigit = 200;
    int myIndex = 4;
    int res = vdigniBitNa(myDigit,myIndex);
    printf("%d",res);

    return 0;
}

int vdigniBitNa(int digit, int index){
    int mask = 1;
    int shiftedMask = mask << index;
    int result = digit | shiftedMask;
    return result;
}