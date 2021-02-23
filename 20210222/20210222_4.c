/*Задача 4.
Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/


#include <stdio.h>

struct date{
    unsigned short day;
    unsigned short month;
    unsigned short year;
};

int main(void){
    struct date contract1 = {11,11,2011};

    struct date contract2;
    contract2.day = 12;
    contract2.month = 12;
    contract2.year = 2012;

    struct date contract3 = {.month = 3, .year = 2003, .day = 3};

    printf("Info about conttrac1: %hu - %hu - %hu\n",contract1.day,contract1.month,contract1.year);
    printf("Info about conttrac2: %hu - %hu - %hu\n",contract2.day,contract2.month,contract2.year);
    printf("Info about conttrac3: %hu - %hu - %hu\n",contract3.day,contract3.month,contract3.year);




    return 0;
}