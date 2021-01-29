/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най
отгоре, а телата им под
мейн функцията. */

#include <stdio.h>

double triangleArea(double x, double y);
double rectangleArea(double z);
/* I assume that the second figure is a rectangle*/

int main(){
    printf("Enter two float numbers for each side of the triangle:\n");
    double sideA;
    double sideB;
    scanf("%lf %lf",&sideA,&sideB);
    double answer = triangleArea(sideA,sideB);
    printf("The area of the triangle is %lf\n",answer);
    
    printf("The area of the rectangle is %lf\n",rectangleArea(triangleArea(sideA,sideB)));

    return 0;
}

double triangleArea(double x, double y){
    return (x * y) / 2.0;
}

double rectangleArea(double z){
    /* По-добра практика ли е да се прави допълнителна проментива за резултата и да връщаме нея
    float result = z*2; 
    или е по-добре направо да връщаме z*2     */ 
    return z * 2;
}
    

