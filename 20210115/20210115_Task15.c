#include <stdio.h>
#include <string.h>

void test(){
    static int g_someNumber = 1000;
    g_someNumber++;
    printf("%i\n",g_someNumber);
}

int main(void){
    test();
    test();
    test();
    

}



