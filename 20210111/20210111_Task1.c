#include <stdio.h>

int operatorANDFunc(int x, int y);
int operatorORFunc(int x, int y);
int operatorXORFunc(int x, int y);

int main(){
    int a = 3;
    int b = 5;
    int resultAND,resultOR,resultXOR;
    resultAND = operatorANDFunc(a,b);
    resultOR = operatorORFunc(a,b);
    resultXOR = operatorXORFunc(a,b);

    printf("%d",resultAND);
    printf("\n%d",resultOR);
    printf("\n%d",resultXOR);


    return 0;
}

int operatorANDFunc(int x, int y){
    int result;
    result = x & y;
    return result;
}

int operatorORFunc(int x, int y){
    int result;
    result = x | y;
    return result;
}

int operatorXORFunc(int x, int y){
    int result;
    result = x ^ y;
    return result;
}