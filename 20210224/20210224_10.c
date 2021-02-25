/*Задача 10.
Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/

#include <stdio.h>

#define AVG(x,y) ((x+y)/2)
#define MYPOW(i,x,y,res) \
    for (i; i < y;i++ )\
        {res *= x;}\

#define AVGR(a,b,res,count) \
for (a; a<=(b);a++){\
    res += a;\
    count +=1;\
    }\
res = res / count;\
    
#define TOUPPER(x) ((x - 'a') + 'A')


int main(void){
    printf("%f\n",AVG(5.0,10.0));

    char someChar = 'x';
    printf("%c\n",TOUPPER(someChar));

    int someInt = 5;
    int somePower = 3;
    int start1 = 0;
    int result = 1;
    MYPOW(start1,someInt,somePower,result);
    printf("%i\n",result);

    float a = 5;
    float b = 10;
    float res = 0.0;
    float count = 0;
    AVGR(a,b,res,count);
    printf("%f\n",res);

    return 0;

}