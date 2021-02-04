/* Задача 9. Използвайте do
while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа. */

#include <stdio.h>
#include <string.h>
#include "f.h"
/*компилираме myfunctions.c заедно с този файл, за да използваме функцията reverse */
void itoa(int n, char s[]);


int main(void){
    char myString[1000];
    int myNumber;
    printf("Enter your number:\n");
    scanf("%i",&myNumber);
    itoa(myNumber,myString);
    reverse(myString);
    printf("The result is %s\n",myString);
    return 0;

}


void itoa(int n, char s[]){
    int index = 0;
    char element;

    do{
        element = (n % 10) + 48;
        s[index] = element;
        n /= 10;
        index++;

    }while ( n != 0);

    
}