/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/

#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void){
    FILE *fp1 = fopen("file14.txt","r");
    FILE *fp2 = fopen("fileToCreate14.txt","w");
    int c;


    if ((NULL == fp1) || (NULL == fp2)){
        printf("Error when opening the files");
        return 1;
    }

    while ((c = fgetc(fp1))!= EOF){
        if((c >= 97) && (c <= 122)){
            int cToAdd = c - 32;
            fputc(cToAdd,fp2);
            printf("%c added\n",cToAdd);
        }else{
            fputc(c,fp2);
            printf("%c added\n",c);
        }
    }

    fclose(fp1);
    fclose(fp2);

    remove("file14.txt");
    int result =rename("fileToCreate14.txt","file14.txt");
    if (result == 0){
        printf("Success.\n");
    }else{
        char myError[500];
        strerror_s(myError,500,errno);
        printf("Upps..Error with %s",myError);
    }
    FILE *fptr3 = fopen("file14.txt","r");

    while ((c = fgetc(fptr3)) != EOF){
        printf("%c",c);
    }

    
    return 0;
}