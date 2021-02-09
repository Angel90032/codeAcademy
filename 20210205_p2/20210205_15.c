/*Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове). */


#include <stdio.h>


double myF(int lenX, int lenY,double arr[lenX][lenY]);

int main(void){
    double myArr[3][4]= {
        {300,400,500,600},
        {10,20,30,40},
        {50,60,70,80}};

    myF(3,4,myArr);
    return 0;
}

double myF(int lenX,int lenY,double arr[lenX][lenY]){
    int x,y;
    for (x = 0; x < lenX;x++){
        double result = 0;
        for ( y = 0; y < lenY; y++){
            result += arr[x][y];
        }
        double avg = result / lenY;
        printf("The average of the %i row is %lf\n",x,avg);
    }

}