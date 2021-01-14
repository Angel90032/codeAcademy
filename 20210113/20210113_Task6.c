#include <stdio.h>

int main(void){
    char a = -127;
    unsigned char b = 255;
    unsigned int c =  6237498;
    long int d = 4294967292; /* и с long int и с unsigned int ми принтира -4 , unsigned int [0, 4 294 967 295] */
    unsigned int e = 4294967292;
    long long int f = -9000000000000775845;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);

}