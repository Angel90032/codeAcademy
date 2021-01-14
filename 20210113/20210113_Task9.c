#include <stdio.h>

int main(void){
    float a = 4.9876543;
    long double b = 7.123456789012345678890;
    long double c = 18398458438583853.28;
    long double d = 18398458438583853.39875937284928422;
    double f;

    printf("%d\n",sizeof(a));
    printf("%f\n",a);
    printf("%d\n",sizeof(b));
    printf("%f\n",b);
    printf("%d\n",sizeof(c));
    printf("%f\n",c);
    printf("%d\n",sizeof(d));
    printf("%f\n",d);
    printf("%d\n",sizeof(f));

}