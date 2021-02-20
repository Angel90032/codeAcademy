/*Задача 9. Направете функця add(), която събира две точки.*/


#include <stdio.h>

struct Point{
    int x;
    int y;
};

void add(struct Point p1,struct Point p2);



int main(void){
    struct Point point1 = {10,20};
    struct Point point2 = {100,200};
    add(point1,point2);
    return 0;
}

void add(struct Point p1,struct Point p2){
    printf("The sum of x1 and x2 is: %i\n",(p1.x + p2.x));
    printf("The sum of y1 and y2 is: %i\n",(p1.y+p2.y));
}