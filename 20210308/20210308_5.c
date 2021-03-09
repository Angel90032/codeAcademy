/*Задача 5
Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char * argv[]){
    FILE *fpin = NULL;
    FILE *fpout = NULL;
    if (argc < 3){
        printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",argv[0]);
    }else{
        fpin = fopen(argv[1], "r");
        fpout = fopen(argv[2],"w");
    }
    if (NULL != fpin && NULL !=fpout){
        for(;;){
            int nValue = 0;
            fscanf(fpin, "%d",&nValue);
            if (feof(fpin)) break;
            fprintf(fpout, "%d",nValue);
        }
    }else if (argc >= 3){
        fprintf(stderr, "\nFailed to open IN/OUT files\n");
    }
    if (NULL != fpin) fclose (fpin);
    if (NULL != fpout) fclose (fpout);
    return 0;
}