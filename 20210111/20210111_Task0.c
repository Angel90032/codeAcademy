<<<<<<< HEAD
#include <stdio.h>

int main(){
    char a = 5;
    char b = 6;
    char result = 5+6;

    printf("%c",result)

    return 0;
}
=======
#include <stdio.h>

int addDigit(int x,int y);

int main(){
    int result;
    result = addDigit(10,15);
    printf("%d",result);

    return 0;
}

int addDigit(int a, int b){
    int c;
    c = a + b;
    return c;
}
>>>>>>> 02783fbaa48dea683170f0ed94039c4c4d03e384
