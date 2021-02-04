#include <stdio.h>

int main(void){
    char *myString = "Hello World";
    printf("%c",*(myString+8));


    return 0;
}