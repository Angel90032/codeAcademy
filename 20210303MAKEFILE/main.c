#include "someH.h"
#include <stdio.h>


int main(void){
    int someArr[] = {10,20,30,40,35,25,15,5};
    printf("%i\n",my_addTimes2(10,5));
    printf("%i\n",my_letterTimesInAstr("Hello",'l'));
    printf("%i\n",my_maxIntInArr(someArr,8));
    printf("%i\n",my_minIntInArr(someArr,8));
    my_oddOrEven(11);
    return 0;
}