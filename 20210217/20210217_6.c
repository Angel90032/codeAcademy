/*Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/

#include <stdio.h>
#include <string.h>

int letterCounter(char someChar, char *arr );

int main(void){
    int ( *pToF ) ( char, char* ) = NULL;
    pToF = letterCounter;
    char myString[1000];
    char letterToFind;
    printf("Enter your string\n");
    fgets(myString,sizeof(myString),stdin);
    printf("Enter the letter that you want to search for:\n");
    scanf("%c",&letterToFind);
    int result = (*pToF)(letterToFind,myString);
    printf("The letter %c was found %i times in your string.\n",letterToFind,result);
    return 0;
}

int letterCounter(char someChar, char *arr ){
    int letterCounter = 0;
    char *p = arr;

    while (*p != '\0'){
        if( *p == someChar){
            letterCounter++;
        }
        p++;
    }
    return letterCounter;

}