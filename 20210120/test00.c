
/*Използвайте do-while цикъл, за да напишете функцията void itoa(int n, char s[]), 
която преобразува число в символен низ (обратната функция на atoi). 
do-while цикълът e необходим, тъй като в масива с ще трябва да се постави поне един символ, дори ако n е нула.
 Ако n = 123, за да вземем последната цифра, трябва да разделим n по модул(%) на основата на бройната система 10. 
 За да получите чаръктър число, трябва да съберете резултата с '0'. 
 За да вземете следващото число, трябва да разделите n на 10. 
 Това продължава докато n е различно от нула. Това генерира низа в обратен ред – 321, затова обърнете низа */

#include <stdio.h>
#include <string.h>

void itoa(int iSomeInt, char someString[]){
    //int index = 0;
    do{
        char lastDigitAsChar;
        printf("We have added %c to our string\n",lastDigitAsChar);
        printf("Our current iSomeInt is %i\n",iSomeInt);
        printf("Our current someString is: %s\n",someString);
        printf("-------------------------------------------------------\n");

        int lastDigit = iSomeInt % 10;
        iSomeInt = iSomeInt / 10;
        lastDigitAsChar = (char)(lastDigit) + '0';
        char stringToAdd[1000];
        stringToAdd[0] = lastDigitAsChar;
        strncat(someString,stringToAdd,1);
        //index++;

        printf("We have added %c to our string\n",lastDigitAsChar);
        printf("Our current number is %i\n",iSomeInt);
        printf("Our current string is: %s\n",someString);
        printf("-------------------------------------------------------\n");


    }while( iSomeInt != 0);

    printf("The cycle has ended.\n");
    someString = strrev(someString);
    /*int x = strlen(someString) -1;
    int newIndex = 0;
    char finalString[100];
    for (x; x >=0; x--){
        finalString[newIndex] = someString[x];
        newIndex++;
    } */
        
        
    printf("Our correct string is %s",someString);

}

int main(void){
    int iMyNumber;
    char cMystring[10000] = {};
    printf("Enter your number:\n");
    scanf("%i",&iMyNumber);
    itoa(iMyNumber,cMystring);

}
    
