#include <stdio.h>

struct Time{
    int seconds;
    int minutes;
    int hours;
    
};

struct Time contract1 = {50,25,2};
struct Time contract2 = {20,15,5};

void addM(struct Time *someP,int valueToAdd){
    
    someP->minutes += valueToAdd;

}


int main(void){
    struct Time contract1 = {50,25,2};
    struct Time contract2 = {20,15,5};
    
    printf("%i\n",contract1.minutes);
    struct Time *ptr1;
    ptr1 = &contract1;
    printf("%i %i %i\n",ptr1->seconds,ptr1->minutes,ptr1->hours);
    addM(ptr1,15);
    printf("%i %i %i\n",ptr1->seconds,ptr1->minutes,ptr1->hours);

    return 0;
}