/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга*/

#include <stdio.h>
#include <string.h>

void my_strncat(char *destinationStr,char *sourceStr, int n);


int main(void){
    char myDestination[200] = "Hello ";
    char mySource[100];
    int count;
    printf("Enter your source string:\n");
    gets(mySource);
    printf("How many elements do you wish to copy from it?\n");
    scanf("%i",&count);
    my_strncat(myDestination,mySource,count);

    return 0;
}


void my_strncat(char *destinationStr,char *sourceStr, int n){
    char *pDest = &(destinationStr[strlen(destinationStr)-1]); /* pointer към последния елемент */
    char *pSource = sourceStr;
    int extendedWith = 1;

    while (extendedWith <= n){
        *pDest = *pSource;
        pDest++;
        pSource++;
        extendedWith++;
    }
    *pDest = '\0';

    printf("The extended string is %s\n",destinationStr);
}