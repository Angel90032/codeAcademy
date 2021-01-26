#include <stdio.h>
#include <string.h>


void itoa(int iX, char cString[]);


int main(void){
    short int iMyNumber;
    char cMystring[10000];
    printf("Enter your number:\n");
    scanf("%i",&iMyNumber);
    itoa(iMyNumber,cMystring);

}

void itoa(int iX, char cString[] ){
    int index = 0;
    
    do{
        int lastDigit = iX % 10;
        iX = iX / 10;
        char lastDigitAsChar = (char)(lastDigit) + '0';
        cString[index] = lastDigitAsChar;
        index++;

    }while (iX != 0);
    //cString[index+1] = '\0';
    cString = strrev(cString);
    printf("My String is %s\n",cString);

}