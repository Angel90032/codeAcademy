/*Задача 5.
Направете масив от 10 структури от задача 4. Задайте стойност на 10
те дати, по избор.*/

#include <stdio.h>

struct date{
    unsigned short day;
    unsigned short month;
    unsigned short year;
};


int main(void){
    struct date array[10] = {
        {1,1,2001}, {2,2,2002},{3,3,2003},{4,4,2004},{5,5,2005},
        {6,6,2006},{7,7,2007},{8,8,2008},{9,9,2009},{10,10,2010},
    };

    printf("%hu\n",array[1].day);
    printf("%hu\n",array[9].month);
    printf("%hu\n",array[5].year);
    


    return 0;
}