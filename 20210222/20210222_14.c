/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/

#include <stdio.h>

struct someDate {
    int  Day : 6; /*1 + 2 + 4 + 8 + 16 = 31*/
    int  Month : 5; /*1 + 2 + 4 + 8* = 15*/
    int  Year : 12 ; /* работи за години от 0 до 2047*/

};

struct someDate myFunc(int d, int m, int y){
    struct someDate myDate;
    if (0 <= d <= 31){
        if (1 <= m <= 12){
            if (0 <= y <= 2047){
                printf("The date is a correct one!\n");
                 myDate.Day = d;
                 myDate.Month = m;
                 myDate.Year = y;
                 printf("The date is %i %i %i",myDate.Day,myDate.Month,myDate.Year);
            }
        }
    }
    
}

int main(void){
    int d,m,y;
    printf("Enter d m y\n");
    scanf("%i %i %i",&d,&m,&y);
    myFunc(d,m,y);
    return 0;
}