/*Задача 13.
Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef.*/

#include <stdio.h>
#pragma pack(1)

typedef struct  {
    int hour;
    int min;
    int sec;
    
    
}t_MyTime;



int getSeconds(t_MyTime someTime);
int getMinutes(t_MyTime someTime);
int getHours(t_MyTime someTime);

void addSeconds(t_MyTime,int seconds);
void addMinutes(t_MyTime,int minutes);

t_MyTime SecToTime(int seconds);
int TimeToSec(t_MyTime someTime);


t_MyTime TPlusT(t_MyTime a, t_MyTime b);
void TMinusT(t_MyTime a, t_MyTime b);

int main(void){
    t_MyTime bgTime = {10,35,40};
    t_MyTime nowIsTheTime = {2,25,21};
    /*printf("H = %d M = %d S = %d\n",getHours(bgTime),getMinutes(bgTime),getSeconds(bgTime));*/


    /*addSeconds(bgTime,35);*/
    /*addMinutes(bgTime,30);*/

    SecToTime(5670);
    printf("%d\n",TimeToSec(bgTime));

    /*TPlusT(bgTime,nowIsTheTime);

    TMinusT(bgTime, nowIsTheTime);*/

    

    return 0;
}

int getSeconds(t_MyTime someTime){
    return someTime.sec;
}

int getMinutes(t_MyTime someTime){
    return someTime.min;
}

int getHours(t_MyTime someTime){
    return someTime.hour;
}


void addSeconds(t_MyTime someTime,int seconds){
    someTime.sec += seconds;
    

    if (someTime.sec >= 60){
        int minToAdd = someTime.sec / 60;
        someTime.sec %= 60;
        someTime.min += minToAdd;
    }
    if (someTime.min >= 60){
        int hToAdd = someTime.min / 60;
        someTime.min %= 60;
        someTime.hour += hToAdd;
    }

    if (someTime.hour >= 24){
        someTime.hour %= 24;
    }
    printf("The new time will be: H = %d M = %d S = %d\n",getHours(someTime),getMinutes(someTime),getSeconds(someTime));

}

void addMinutes(t_MyTime someTime,int minutes){
    someTime.min += minutes;

    
    if (someTime.min >= 60){
        int hToAdd = someTime.min / 60;
        someTime.min %= 60;
        someTime.hour += hToAdd;
    }

    if (someTime.hour >= 24){
        someTime.hour %= 24;
    }
    printf("The new time will be: H = %d M = %d S = %d\n",getHours(someTime),getMinutes(someTime),getSeconds(someTime));
}

t_MyTime TPlusT(t_MyTime a, t_MyTime b){
    int sToAdd = TimeToSec(a) + TimeToSec(b);
    SecToTime(sToAdd);

}


void TMinusT(t_MyTime a, t_MyTime b){
    int sToAdd = TimeToSec(a) - TimeToSec(b);
    SecToTime(sToAdd);
}

int TimeToSec(t_MyTime someTime){
    int result = someTime.sec + someTime.min * 60 + someTime.hour * 3600;
    return result;
}

t_MyTime SecToTime(int seconds){
    int hours = seconds / 3600;
    seconds %= 3600;
    int minutes = seconds / 60;
    seconds %= 60;
    t_MyTime resultTime = {hours,minutes,seconds};
    printf("H = %d M = %d S = %d\n",getHours(resultTime),getMinutes(resultTime),getSeconds(resultTime));
    return resultTime;
}
