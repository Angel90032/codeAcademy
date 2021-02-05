#include <stdio.h>
#include <stdio.h>

/*Задача 1.Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг ' 0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с). */


void printStr(char *s);

int main(void){
    printf("Enter your string:\n");
    char myString[1000];
    gets(myString);
    printStr(myString);
    return 0;
}

void printStr(char *s){
    int index = 0;

    while(s[index] != '\0'){
        printf("The element at index %i is %c\n",index,s[index]);
        index++;
    }
}