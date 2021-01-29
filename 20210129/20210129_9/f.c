#include "f.h"


int multiplyBy2(int x){
    int res = devideBy5(x); 
    return res * 2;
}

int devideBy5(int y){
    int answer = add200(y);
    return answer / 5;
}



int add200(int z){
    return z + 200;
}