/*Задача 1.
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/

#include <stdio.h>

int main(void){
    FILE *fp1, *fp2, *fp3;
    char c1,c2;
    fp1 = fopen("task1f1.txt","a+");
    fp2 = fopen("task1f2.txt","a+");
    fp3 = fopen("task1temp.txt","w");
    
    if (NULL == fp1){
        printf("Could not open file1.\n");
        return 1;
    }
    if (NULL == fp2){
        printf("Could not open file2.\n");
        return 1;
    }

    do {
    c1 = getc(fp1);
    c2 = getc(fp2);
    if (c1 != c2){
        putc(c2 ,fp3);
    }
    } while( (c1 != EOF) && (c2 != EOF) );


    fseek(fp3,0,SEEK_SET);

    while (getc(fp3) != EOF){
        putc(getc(fp3),fp1);
        putc(getc(fp3),fp2);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}