/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено. */

#include <stdio.h>
#include <string.h>

int strend(char *s,char *t);


int main(void){
    char firstStr[1000];
    char secondStr[500];
    printf("Enter your first string:\n");
    fgets(firstStr,1000,stdin);
    printf("Enter your second string:\n");
    fgets(secondStr,500,stdin);
    printf("The result is %i\n",strend(firstStr,secondStr));
    return 0;
}

int strend(char *s,char *t){
    int result = 1;
    printf("The len of the first str is:%i\n",strlen(s));
    printf("The len of the second string is:%i\n",strlen(t));
    int lenDiff = strlen(s) - strlen(t); /* намиране индекса, от който трябва да започнем сравнението*/
    char *pS = s;
    char *pT = t;
    pS += lenDiff;

    while(*pS != '\0'){
        if (*pS != *pT){
            result = 0;
        }
        pS++;
        pT++;
    }

    return result;



}