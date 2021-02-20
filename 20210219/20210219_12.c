/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/

#include <stdio.h>
#include <math.h>

struct Point{
    int x;
    int y;
};

double calculateDistance(struct Point p1, struct Point p2);

int main(void){
    int x1,x2,y1,y2;
    printf("Enter x and y for the first point\n");
    scanf("%i %i",&x1,&y1);
    printf("Enter x and y for the second point\n");
    scanf("%i %i",&x2,&y2);
    struct Point point1 = {x1,y1};
    struct Point point2 = {x2,y2};
    calculateDistance(point1,point2);

    return 0;
}

double calculateDistance(struct Point p1, struct Point p2){
    double result;
    int absX = abs(p2.x - p1.x );
    int absY = abs(p2.y - p1.y);
    result = sqrt((absX * absX) + (absY * absY));
    printf("%lf",result);
}
