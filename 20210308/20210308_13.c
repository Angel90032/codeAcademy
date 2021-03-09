/*Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/

#include <stdio.h>

int main(void){
    FILE *fptr = fopen("file13.txt","w");
    int c;
    int newLineCount = 0;
    fputs("Hello1\nHello2\n",fptr);
    while ((c = fgetc(fptr)) != EOF){
        if (c == '\n'){
            newLineCount += 1;
        }
    }
    printf("%i\n",newLineCount);
    return 0;
}