/*Задача 1.
Напишете функция, която принтира низ, пойнтера към
началото му е подаден като аргумент на функцията void printstr(char *s); Не
забравяйте, низът винаги завършва с знак за терминираща нула ' 0', затова
проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
се стигне този знак. */

#include <stdio.h>
#include <string.h>

void printString (char someString[]);

int main(){
    printf("Enter your string:\n");
    /*char *myString;*/
    char myString[100];
    gets(myString);
    printString(myString);


    return 0;
}

void printString (char someString[]){
    int index = 0;
    while (someString[index] != '\0'){
        printf("%c\n",someString[index]);
        index++;
    }
}