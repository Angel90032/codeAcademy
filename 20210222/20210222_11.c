/*Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един 7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/

#include <stdio.h>

union someUn{
    char a;
    int x;
    int y;
}myUn,myUn10,myUn20;

int main(void){
    myUn.a = 'c';
    myUn.x = 7;
    myUn.y = 10;

    printf("%c %i %i", myUn.a,myUn.x,myUn.y);
    return 0;
}