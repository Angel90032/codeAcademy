/*#include <stdio.h> */ 
#include "f.h"


int main(void){
    int x, y;
    printf("Enter 2 int numbers:\n");
    scanf("%i %i",&x,&y);
    printf("The result of the function add is: %i\n",add(x,y));
    printf("The result of the function incr is: %i\n",incr(add(x,y)));

    return 0;
}