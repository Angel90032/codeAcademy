/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/

#include <stdio.h>

int main(void){
    int ft, i = 0;
    FILE *fp =fopen("FILE15.txt","w");
    if (NULL == fp){
        printf("Failed to open.");
        return -1;
    }
    fputs("ANGEL1234567",fp);
    
    ft = ftell(fp);
    printf("%i\n",ft);
    while(i<ft){
        i++;
        fseek(fp,-i,SEEK_END);
        
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    




    return 0;
}