#include <stdio.h>

int main(void){

    int iA = 200;
    float fB = 2.5;
    short int iC = 30000;
    unsigned long int iD =  1000000;
    unsigned int iE = 4294967295;

    printf("%d\n",sizeof(iA));
    printf("%d\n",sizeof(fB));
    printf("%d\n",sizeof(iC));
    printf("%d\n",sizeof(iD));
    printf("%d\n",sizeof(iE));
}