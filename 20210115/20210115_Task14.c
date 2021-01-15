#include <stdio.h>
#include <string.h>

extern int g_someNumber;

void test(){
    g_someNumber++;
}

int main(void){
    test();
    test();
    test();
    printf("%i",g_someNumber);

}

int g_someNumber = 1000;