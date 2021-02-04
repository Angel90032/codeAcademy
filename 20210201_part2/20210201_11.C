/*Задача 11 напишете функция void squeeze(char s[], char c), която
премахва символа с от низа s[]*/

#include <stdio.h>
#include <string.h>

void squeeze(char s[], char c);


int main(void){
    char myString[1000];
    printf("Enter your string:\n");
    gets(myString);
    char notWanted;
    printf("Enter the char to be removed:\n");
    scanf("%c",&notWanted);
    squeeze(myString,notWanted);



    return 0;
}

/* Hello'\0'*/

void squeeze(char s[], char c){
    int tempIndex = 0;
    int oldIndex = 0;
    char tempStr[1000] = " ";
    int theL = strlen(s);
    while (oldIndex < theL ){
        if (s[oldIndex] != c){
            
            tempStr[tempIndex] = s[oldIndex];
            tempIndex++;
            oldIndex++;
        }else{
            oldIndex++;
            continue;
        }
    }
    strcpy(s,tempStr);
    printf("The new value of the string is %s\n",s);
}