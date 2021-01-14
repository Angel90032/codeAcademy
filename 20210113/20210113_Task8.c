#include <stdio.h>

int main(void){

    char x = 8;
    printf("%c\n",x); /*  8  */
    printf("%d\n",x); /* 56   */
    x = x -2;
    printf("%c\n",x); /*  6  */
    printf("%d\n",x); /* 54   */
    x= x+ 6;
    printf("%c\n",x); /*  12  */
    printf("%d\n",x); /*   60 */
    x = x -(10 + 2);
    printf("%c\n",x); /*  0  */
    printf("%d\n",x); /*  52  */ 

    /*    */
}