/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/


#include <stdio.h>

int daysInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int nDay(int year, int month, int day);
int isLeap(int year);


int main(void){
    int myYear,myMonth,myDay;
    printf("Enter year month day:\n");
    scanf("%i %i %i",&myYear,&myMonth,&myDay);
    int result = nDay(myYear,myMonth,myDay);
    printf("%i %i %i was/is/will be the %i day of the year.\n"
    ,myDay,myMonth,myYear,result);

    return 0;
}

int nDay(int year, int month, int day){
    int result = 0;
    int start;

    for (start = 0; start < month -1; start++){
        result += daysInMonths[start];
    }

    result += day;

    if (isLeap(year) && month >= 3){
        result++;


    }
    return result;
}

int isLeap(int year){
    int isItLeap;
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
        isItLeap == 1;
        printf("The Y is leap\n");
    }else{
        isItLeap == 0;
        printf("The Y is not leap\n");
    }

}

