/*Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/

#include <stdio.h>

int main(void){
    FILE *ptr = NULL;
    ptr = fopen("task10.txt","wt");
    if (NULL == ptr){
        printf("Error");
    }else{
        fputs("My first string\n",ptr);
        fputs("My second string",ptr);
        long fPos = ftell(ptr);
        printf("%ld",fPos);
        fclose(ptr);
    }
    return 0;
}