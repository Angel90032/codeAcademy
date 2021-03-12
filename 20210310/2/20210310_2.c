/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/


#include <stdio.h>

#define OPENING_CURLY 123
#define OPENING_ROUND 40 
#define OPENING_SQUARE 91

#define CLOSING_CURLY 125
#define CLOSING_ROUND 41
#define CLOSING_SQUARE 93

void bracketsCounter (FILE * fp);

int main(int argc, char *argv[]){
    FILE *fp = fopen("random.txt","r");
    bracketsCounter(fp);
    return 0;
}

void bracketsCounter (FILE * fp){
    int c;
    int opCurlyBrcCount = 0;
    int opRoundBrcCount  = 0;
    int opSqrBrcCount = 0; /*opening Curly,Round and Square brackets*/
    int clCurlyBrcCount = 0;
    int clRoundBrcCount = 0;
    int clSqrBrcCount = 0; /* closing brackets*/
    int curlyDiff, roundDiff,SqrDiff;
    fseek(fp,0,SEEK_SET);
    while((c = fgetc(fp))!= EOF){
        printf("READ: %c\n",c);
        
        switch (c)
        {
        case (OPENING_CURLY):
            opCurlyBrcCount += 1;
        break;

        case (OPENING_ROUND):
            opRoundBrcCount += 1;
        break;

        case (OPENING_SQUARE):
            opSqrBrcCount += 1;
        break;

        case (CLOSING_CURLY):
            clCurlyBrcCount += 1;
        break;

        case (CLOSING_ROUND):
            clRoundBrcCount += 1;
        break;

        case (CLOSING_SQUARE):
            clSqrBrcCount += 1;
        break;        

        }
        
    }
    printf("\nOpening C %i R %i S %i\n",opCurlyBrcCount,opRoundBrcCount,opSqrBrcCount);
    printf("Closing C %i R %i S %i\n",clCurlyBrcCount,clRoundBrcCount,clSqrBrcCount);

    curlyDiff = opCurlyBrcCount - clCurlyBrcCount;
    roundDiff = opRoundBrcCount - clRoundBrcCount;
    SqrDiff = opSqrBrcCount - clSqrBrcCount;

    printf("You need to close %i Curly\t%i Round\n %i Square brackets",curlyDiff,roundDiff,SqrDiff);

}