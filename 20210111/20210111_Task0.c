#include <stdio.h>

int addDigit(int x,int y);

int main(){
    int result;
    result = addDigit(10,15);
    printf("%d",result);

    return 0;
}

int addDigit(int a, int b){
    int c;
    c = a + b;
    return c;
}
