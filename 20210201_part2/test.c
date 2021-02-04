#include <stdio.h>


int main(void){
    int a = 5;
    int *p;
    p = &a;
    

    
    printf("The value of the variable is %i\n",*p);
    printf("Address of the variable is %X\n",p);
    printf("The adress of the pointer is %X\n",&p);

    a = 20;
    *p = 30;
    printf("The value of the variable is %i\n",*p);
    printf("Address of the variable is %X\n",p);
    printf("The adress of the pointer is %X\n",&p);
}