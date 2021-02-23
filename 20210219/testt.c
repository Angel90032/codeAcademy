#include <stdio.h>


struct Point{
    int x;
    int y;
    
};


int main(void){
    struct Point myPoint = {10,20};
    struct Point *ptr = &myPoint;

    printf("%d",*ptr);
    return 0;
}

