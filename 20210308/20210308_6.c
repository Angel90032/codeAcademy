/*Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметри-
спейс, неспейс, спецификатори;*/

#include <stdio.h>

int main(void){
    char w1[10], w2[10];
    int number;
    FILE *ptr = NULL;
    ptr = fopen("text100.txt","rt");
    if (NULL == ptr){
        printf("Error.Could not open the  file\n");
    }else{
        fscanf(ptr, "%s %s %d",w1,w2,&number);
        printf("%d %s %s",number,w1,w2);
        fclose(ptr);
    }
    

    return 0;
}