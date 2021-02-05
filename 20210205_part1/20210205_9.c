/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най
много n символа от t в s . */

#include <stdio.h>
#include <stdio.h>

void my_strncpy(char*s, char *t, int n);


int main(void){
    char destinationStr[] = "ABCDEFGH";
    char sourceStr[9];
    printf("Enter your source string\n");
    gets(sourceStr);
    printf("How many elements do you want to copy?\n");
    int count;
    scanf("%i",&count);
    my_strncpy(destinationStr,sourceStr,count);
    
    return 0;

}
void my_strncpy(char*s, char *t, int n){
    char *pS = s;
    char *pT = t;
    int elementsCopied = 0;

    while (elementsCopied < n){
        *pS = *pT;
        pS++;
        pT++;
        elementsCopied++;

    }
    printf("The destination string is %s\n",s);
}
