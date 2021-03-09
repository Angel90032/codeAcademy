/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/

#include <stdio.h>

int main(void){
    FILE *fp = NULL;
    fp = fopen("8.txt","w");
    char myStr[] = "Hello World";
    int fputs(myStr,fp);
    return 0;
}