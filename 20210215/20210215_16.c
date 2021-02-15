/*Задача1 6 .Направете
същото , както в задача 17 (15?), но използвайки готоватафункция strcpy . 
Потърсете онлайн как работи тази
функция и какви аргументи приема
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm*/


#include <stdio.h>
#include <string.h>



int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[25];
    char string4[100];
    strcpy(string2,string1);
    strcpy(string4,string3);
    printf("%s\n",string2);
    printf("%s\n",string4); 
    return 0;
}
    

