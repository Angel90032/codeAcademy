/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.*/

#include <stdio.h>

struct Point{
    int x;
    int y;
    struct Point *someP;
};


int main(void){
    struct Point point1 = {10,20};
    struct Point *pToP = &point1;
    
    printf("X = %i Y = %i\n",point1.x,point1.y);
    
    pToP -> x = 100;
    pToP -> y = 200;

    printf("After the change :X = %i Y = %i\n",point1.x,point1.y);

    struct Point point2,point3;
    struct Point *pToP2 = &point2; /*pToP2 е насочен към адреса на point2 */
    pToP2->x = 500;
    pToP2->y = 700;

    printf("Point 2 x = %i and y = %i\n",point2.x,point2.y);
    

   

}