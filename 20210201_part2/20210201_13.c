/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки. */

#include <stdio.h>
#include <string.h>

void lower(char s[]);

int main(void){
    char myString[1000];
    printf("Enter your string:\n");
    gets(myString);
    lower(myString);
    return 0;
}


void lower(char s[]){
    int index;

    for (index = 0; index < strlen(s);index++){
        if (s[index] >= 65 && s[index] <= 90){
            printf("I have found a capital letter\n");
            char temp = s[index];
            temp += 32;
            s[index] = temp;
        }
    }



    printf("The final string is %s",s);
}



