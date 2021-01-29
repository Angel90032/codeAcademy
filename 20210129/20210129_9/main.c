#include "f.h"


int main(){
    int myNumb;
    printf("Enter an int:\n");
    scanf("%i",&myNumb);
    int myAnswer = multiplyBy2(myNumb);
    printf("The value of myAnswer is:%i\n",myAnswer);
    
    return 0;
}