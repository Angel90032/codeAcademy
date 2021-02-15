/*Задача
1 7 . Направете същото , както в задача 18 (16?)., но преди да
копирате, нулирайте стойността на стринговете , в
коитоще копирате , използвайки готовата функция memset. 
Потърсете онлайн как работи тази функция и
какви аргументи приема https://www.tutorialspoint.com/c_standard_library/c_functi on_memset.htm */



#include <stdio.h>
#include <string.h>



int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[25];
    char string4[100];
    memset(string2,'\0',strlen(string2));
    memset(string4,'\0',strlen(string4));
    strcpy(string2,string1);
    strcpy(string4,string3);
    printf("%s\n",string2);
    printf("%s\n",string4); 
    return 0;
}