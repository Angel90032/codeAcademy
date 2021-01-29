#include "f.h"


int main(void){
    printf("Choose which function you want to try out:\n1-NOKfinder 2-AbsoluteValue 3-squareRoot\n");
    char myChoice;
    scanf("%c",&myChoice);
    switch (myChoice)
    {
    case '1'/* constant-expression */:
        printf("Enter 2 ints in order to find their NOK:\n");
        int x,y;
        scanf("%i %i",&x,&y);
        int res = findNOK(x,y);
        printf("The NOK of %i and %i is: %i\n",x,y,res);
        break;
    
    case '2':
        printf("Enter a float number to check its absolute value:\n");
        float myFloat;
        scanf("%f",&myFloat);
        printf("The absolute value of your number is: %f",absoluteValue(myFloat));
        break;
    
    case '3':
        printf("Enter a number in order to see its square root:\n");
        double num;
        scanf("%lf",&num);
        printf("The square root of %lf is: %lf\n",num,squareRoot(num));
        break;

    default:
        printf("I guess you dont want to use any of them !");
        break;
    }
    
    return 0;
    
}

