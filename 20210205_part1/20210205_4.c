/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по малък от t[i] връща стойност по
малка от нула < 0. Ako s[i] е по голям от t[i] връща стойност по голяма от
нула > 0 */
#include <stdio.h>
#include <string.h>

/* При сравняване масиви от char с различна дължина, функцията би имала непредвидимо поведение ? */
int our_strcmp(char *s, char *t);


int main(void){
    char firstStr[100];
    char secondStr[100];
    printf("Enter first strings to compare:\n");
    fgets(firstStr, 100,stdin);
    printf("Enter second strings to compare:\n");
    fgets(secondStr, 100,stdin);
    printf("The difference between our strings is %i\n",our_strcmp(firstStr,secondStr));
    return 0;
}

int our_strcmp(char *s, char *t){

    int difference = 0;

    while((*s) || (*t)){
        difference += (*s - *t);
        t++;
        s++;
    }
    return difference;

}