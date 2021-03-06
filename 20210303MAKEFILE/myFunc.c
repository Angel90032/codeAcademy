#include <stdio.h>

#define VALUE_OF_PI 3.14

int my_addTimes2(int x, int y){
    return (x+y)*2;
}


int my_letterTimesInAstr(char * Arr, char x){
    int timesFound = 0;
    char *ptr = Arr;
    
    while (*ptr != '\0'){
        if (*ptr == x){
            timesFound += 1;
        }
        ptr += 1;
    }
    return timesFound;
}

int my_maxIntInArr(int arr[],int len){
    int myMax = -2147483647;
    for (int i = 0; i < len; i++ ){
        if (arr[i] > myMax){
            myMax = arr[i];
        }
    }
    return myMax;
}

int my_minIntInArr(int arr[],int len){
    int myMin = 2147483647;
    for (int i = 0; i < len; i++ ){
        if (arr[i] < myMin){
            myMin = arr[i];
        }
    }
    return myMin;
}

void my_oddOrEven(int x){
    if(x % 2 == 0)
        printf("%d is even.\n", x);
    else
        printf("%d is odd.\n", x);

}

float calculateAreaOfCircle(float r){
    float result = VALUE_OF_PI * r * r;
    return result;
}

