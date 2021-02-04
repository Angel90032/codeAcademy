/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му
Задачи за самоподготовка */

#include <stdio.h>
#include <string.h>



int getline(char s[],int lim);

int main(void){
    printf("Enter your string:\n");
    char myString[1000];
    gets(myString);
    int myLim;
    printf("Enter your limit:\n");
    scanf("%i",&myLim);
    printf("The length of the substring is %i",getline(myString,myLim));

    return 0;
}


int getline(char s[],int lim){
    if (lim > strlen(s)){
        printf("Your lim is too big\n");
        return -1;
    }
    int index;
    char subString[1000];

    for (index = 0; index < lim; index++){
        subString[index] = s[index];
    }

    
    return strlen(subString);


}