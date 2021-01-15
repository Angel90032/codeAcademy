#include <stdio.h>
#include <string.h>

void test();
static int g_someNumber;
int main(void){
    test();
    test();
    test();
    printf("%i",g_someNumber);

}

static int g_someNumber = 100;

void test(){
    g_someNumber++;
}