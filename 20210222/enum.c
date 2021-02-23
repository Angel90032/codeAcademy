#include <stdio.h>


enum bool{false,true,5};


int main(void){
    enum bool b = 5;
    switch(b){
        case (true):
            printf("true");
            break;
        case (false):
            printf("False");
            break;
        default:
            printf("grr");
            break;
    }
    return 0;
}