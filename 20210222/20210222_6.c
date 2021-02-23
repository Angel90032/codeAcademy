/*Задача 6.
Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/


#include <stdio.h>

struct Time{
    int seconds;
    int minutes;
    int hours;
};




int showSeconds (struct Time someTime){
    return someTime.seconds;
}

int showMinutes (struct Time someTime){
    return someTime.minutes;
};

int showHours (struct Time someTime){
    return someTime.hours;
}

void printTimeData(struct Time T){
    printf("Sec - Minutes - Hours of the selected Time variable are: %i-%i-%i\n",
    T.seconds,T.minutes,T.hours);
}

void addSeconds(struct Time *somePtr,int valueToAdd);
void addMinutes(struct Time *somePtr, int minToAdd);
void addHours(struct Time *somePtr, int hToAdd);
struct Time AddTime(struct Time A, struct Time B);
struct Time SubstractTime(struct Time A, struct Time B);


int main(void){
    struct Time contract1 = {50,25,2};
    struct Time contract2 = {20,45,5};
    struct Time *p1, *p2;
    p1 = &contract1;
    p2= &contract2;

    /*printTimeData(contract1);
    addSeconds(p1,15);
    printTimeData(contract1);*/

    /*printTimeData(contract2);
    addSeconds(p2,45);
    printTimeData(contract2);
    return 0;*/

    /*printTimeData(contract2);
    addMinutes(p2,3);
    printTimeData(contract2);
    return 0; */

    /*printTimeData(contract1);
    addHours(p1,5);
    printTimeData(contract1);*/

    struct Time contract10 = {40,20,2};
    struct Time contract11 = {30,50,3};
    /*AddTime(contract10,contract11);*/
    SubstractTime(contract11,contract10);
    return 0;
}

void addSeconds(struct Time *somePtr,int valueToAdd){
    int minToAdd = 0;
    int hToAdd = 0;
    somePtr->seconds += valueToAdd;

    if (somePtr->seconds >= 60){
            
            minToAdd =  somePtr->seconds/ 60;
            somePtr->seconds = somePtr->seconds % 60;
            somePtr->minutes += minToAdd;
    }

    if (somePtr->minutes >= 60){
            
            hToAdd =  somePtr->minutes / 60;
            somePtr->minutes = somePtr->minutes % 60;
            somePtr->hours += hToAdd;
    }



}
void addMinutes(struct Time *somePtr, int minToAdd){
    int hToAdd = 0;
    somePtr->minutes += minToAdd;

    if (somePtr->minutes >= 60){
            
        hToAdd =  somePtr->minutes / 60;
        somePtr->minutes = somePtr->minutes % 60;
        somePtr->hours += hToAdd;
    }
}
void addHours(struct Time *somePtr, int hToAdd){
    somePtr->hours += hToAdd;
}
struct Time AddTime(struct Time A, struct Time B){
    int totalTimeAinSeconds = (A.seconds + 60*(A.minutes) + 3600*(A.hours));
    int totalTimeBinSeconds  = (B.seconds + 60* (B.minutes)+ 3600 *(B.hours));
    int totalTimeResult = totalTimeAinSeconds + totalTimeBinSeconds;
    int newH,newM,newS;
    newH = totalTimeResult / 3600;
    totalTimeResult %= 3600;
    newM = totalTimeResult / 60;
    totalTimeResult %= 60;
    newS = totalTimeResult;
    struct Time result = {newS,newM,newH};
    printf("S M H of the result are %i %i %i",result.seconds,result.minutes,result.hours);
    
    return result;
}
struct Time SubstractTime(struct Time A, struct Time B){
    /*A > B*/
    int totalTimeAinSeconds = (A.seconds + 60*(A.minutes) + 3600*(A.hours));
    int totalTimeBinSeconds  = (B.seconds + 60* (B.minutes)+ 3600 *(B.hours));

    /*if (totalTimeAinSeconds < totalTimeBinSeconds){
        printf("Enter different values.\n");
        exit(error);
    }*/
    int totalTimeResult = totalTimeAinSeconds - totalTimeBinSeconds;
    int newH,newM,newS;
    newH = totalTimeResult / 3600;
    totalTimeResult %= 3600;
    newM = totalTimeResult / 60;
    totalTimeResult %= 60;
    newS = totalTimeResult;
    struct Time result = {newS,newM,newH};

    printf("S M H of the result are %i %i %i",result.seconds,result.minutes,result.hours);
    return result;
}