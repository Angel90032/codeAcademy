/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/

#include <stdio.h>
#include <string.h>

int isPalindrom(char str[]);

int main(void){
    char myStr[100];
    printf("Enter your string:\n");
    gets(myStr);
    /*fgets(myStr,100,stdin);*/
    int result = isPalindrom(myStr);
    printf("%i",result); /*prints 1 of it's a palindrom, prints 0 if it is not.*/


    return 0;
}

int isPalindrom(char str[]){
    char *pFirst = str;
    int indexLastElement = strlen(str)-1;
    /*printf("Str len is %i\n",strlen(str));
    printf("The last element is at index %i\n",indexLastElement);
    printf("The last element is  %c\n",str[indexLastElement]);*/
    char *pLast = &str[indexLastElement];
    int counter = 0;
    int isItAPalin = 1;

    while(pFirst <= pLast){
        printf("First letter is %c\n",*pFirst);
        printf("Last letter is %c\n",*pLast);

        if(*pFirst != *pLast){
            printf("A mistakeee was made...\n");
            isItAPalin = 0;
        }
        counter++;
        pFirst++;
        pLast--;

    }
    return isItAPalin;
}