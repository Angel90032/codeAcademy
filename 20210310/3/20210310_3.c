/*Задача 3.
Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/


#include <stdio.h>



int main(int argc, char *argv[]){
    /*FILE * fp = fopen("text1.txt","r");
    
    while((c = fgetc(fp)) != EOF){
        printf("%c",c);
    }*/
    int c;
    for (int i = 0; i < argc; i++){
        printf("\nThis is page %i\n",i);
        FILE *fp = fopen(argv[i],"r");
        while((c = fgetc(fp)) != EOF){
            printf("%c",c);
        }
    }
    return 0; 
}