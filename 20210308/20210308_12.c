/*Задача 12.
Изместете позицията си във файла 7 байта след началото, ползвайки fseek.*/


#include <stdio.h>


int main(void){
    FILE *fp = NULL;
    char something[20];
    fp = fopen("file12.txt","w");
    if(NULL == fp){
        printf("Error.\n");
        return 1;
    }
    fseek(fp,7,SEEK_SET);
    fputs("Hello\n",fp);
    fgets(something,20,fp);
    printf("%s",something);
    fclose(fp);
        
    
    return 0;
}