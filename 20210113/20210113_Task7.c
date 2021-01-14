#include <stdio.h>

int main(){
    unsigned short int a = 24212;
    int b = -1357674;
    unsigned int c = 1357674;
    int d = -1357674000;
    unsigned int e = 3657895000; /* не разбирам защо превърта, unsigned int [0, 4 294 967 295]        */

    printf("%d\n",a); 
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    



    return 0;
}