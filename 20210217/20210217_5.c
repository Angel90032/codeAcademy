/*Задача 5.
Намерете стойностите в интервала 1
5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0 10, включително.
Използвайте функция, която да пълни числата със случайни.*/


#include <stdio.h>
#include <stdlib.h>


void fill();
void find();
int myArr[5][5] = {0};


int main(void){
    fill();
    find();
    return 0;
}

void fill(){
    int a;
    int b;

    for (a = 0; a < 5; a++){
        for( b = 0; b < 5; b++){
            myArr[a][b] = rand() %(10 - 0 + 1) + 0;
        }
    }
}

void find(){
    int x,y;
    for (x = 0; x < 5; x++){
        for (y = 0; y < 5; y++){
            if ( myArr[x][y] > 0 &&(myArr[x][y]< 6)){
                printf("Element %i is at position with %i-%i\n",myArr[x][y],x,y);
            }
        }
    }
}
