#include <stdio.h>
#include <string.h>

void test(){
<<<<<<< HEAD
    static int g_someNumber = 100;
    g_someNumber++;
    printf("%i\n",g_someNumber);
=======
    static int i_someNumber = 1000;
    i_someNumber++;
    printf("%i\n",i_someNumber);
>>>>>>> 13feb352c0d198207321fcd93c0fc7a77703dc4f
}

int main(void){
    test();
    test();
    test();
<<<<<<< HEAD

}

=======
    

}



>>>>>>> 13feb352c0d198207321fcd93c0fc7a77703dc4f
