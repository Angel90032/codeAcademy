#include <stdio.h>
#include <string.h>

/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) - 1; i < j; i++, j ----, за да обърнете*/



void reverse(char s[]);

int main(void){
    char myString[1000];
    printf("Enter a string:\n");
    gets(myString);
    reverse(myString);
    /*printf("My reversed string is %s\n",myString);*/
    return 0;
}

void reverse(char s[]){
    char *pZero = s;
    char *pLast = &(s[strlen(s)-1]);
    char temp;

    while (1){
        if (pZero >= pLast){
            break;
        }
        temp = *pLast;
        *pLast = *pZero;
        *pZero = temp;
        pZero++;
        pLast--;
    }
    printf("The reversed string is: %s \n",s);
     /*Последният елемент е с индекс strlen -1 */
    /*int j = strlen(s) - 1;
    int i;
    for (i = 0; i < j; i++, j--){
        char ctemp = s[i];
        s[i] = s[j];
        s[j] = ctemp;
    }*/
}