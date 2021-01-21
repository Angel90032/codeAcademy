#include <stdio.h>
#include <string.h>

short int iMyNumber;
char cMystring[21474836];

void itoa(short int iSomeInt, char someString[21474836]){
    do{
        short int lastDigit = iSomeInt % 10;
        iSomeInt = iSomeInt / 10;
        char lastDigitAsChar = lastDigit + '0';
        char stringToAdd[10000];
        stringToAdd[0] = lastDigitAsChar;
        strcat(someString,stringToAdd);

        printf("We have added %c to our string\n",lastDigitAsChar);
        printf("Our current number is %i\n",iSomeInt);
        printf("Our current string is: %s\n",someString);
        printf("-------------------------------------------------------\n");

    }while( iSomeInt != 0);

    printf("The cycle has ended.\n");
    someString = strrev(someString);
    printf("My correct string is %s",someString);

}

int main(void){
    printf("Enter your number:\n");
    scanf("%i",&iMyNumber);
    itoa(iMyNumber,cMystring);
}
