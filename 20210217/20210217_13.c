/*Задача 13
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/


#include <stdio.h>
#include <string.h>

void rev(char *arr);

int main(void){
    void (*p)(char*) = rev;
    printf("Enter your string\n");
    char myString[1000];
    fgets(myString,sizeof(myString),stdin);
    (*p)(myString);

    return 0;

}

void rev(char *arr){
    char *p = arr;
    char *pLast = &arr[strlen(arr)-1];

    while(p < pLast){
        char temp = *p;
        *p = *pLast;
        *pLast = temp;
        p++;
        pLast--;
    }
    char *pToPrint = arr;

    while(*pToPrint != '\0'){
        printf("%c",*pToPrint);
        pToPrint++;
    }
    


}