/*2.
Напишете макрос swap(t, x, y), койти променя местата на двата аргумента
от тип t.*/

#include <stdio.h>


#define SWAP1(t,x,y) (t temp = x; x = y; y = temp;)

int main(void){
    int a,b;
    a = 100;
    b = 200;
    printf("%i %i\n",a, b);
    SWAP1(int,a,b);
    printf("%i %i\n",a, b);
    return 0;
}

