/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки.*/

#include <stdio.h>
/*Въпрос: има ли как динамично да задаваме имената на различните ни променливи от тип Point ?*/

struct Point{
    int x;
    int y;
};

struct Point makepoint111(int x,int y);

int main(void){
    int x,y;
    printf("Enter your X and Y\n");
    scanf("%i %i",&x,&y);
    makepoint111(x,y);
    return 0;
}

struct Point makepoint111(int x,int y){

    struct Point firstPoint = {x,y};
    printf("FirstPoint X is %i, Y is %i\n",firstPoint.x,firstPoint.y);
    x++;
    y++;
    struct Point secondPoint = {x,y};
    printf("SecondPoint X is %i, Y is %i\n",secondPoint.x,secondPoint.y);

    return firstPoint;
}

