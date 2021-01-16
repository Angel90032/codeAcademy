#include <stdio.h>
#include <string.h>

void test(){
    static int i_someNumber = 1000;
    i_someNumber++;
    printf("%i\n",i_someNumber);
}

int main(void){
    test();
    test();
    test();
    

}



