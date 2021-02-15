/*Задача1 5 Ще копираме стрингове . Дефинирайте и инизиалицирайте два стринга
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга , в които ще копираме string 2,
string4.
Дефинирайте функция , която през пойнтери ще извърши
копиранетоот стринг към стринг . Използвайте while и факта , че *pointer++ отива към следващия символ
Помислете за терминиращия символ . Принтирайте двата изкопирани стринга.
Извикайтефункцията и копирайте от string1 в string4.*/

#include <stdio.h>

void cStr(char *str1, char *str2, char *str3,char *str4);
int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[25];
    char string4[100];
    cStr(string1,string2,string3,string4);
    printf("%s\n",string2);
    printf("%s\n",string4); 
    return 0;
}


void cStr(char *str1, char *str2, char *str3,char *str4){
    while(*str1){
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';

    while(*str3){
        *str4 = *str3;
        str3++;
        str4++;
    }
    *str4 = '\0';
}