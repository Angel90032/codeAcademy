/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/

#include <stdio.h>
#include <string.h>


int any(char s1[], char s2[]);

int main(void){
    char S1String[1000];
    char S2String[1000];
    printf("Enter the s1 string:\n");
    gets(S1String);
    printf("Enter the s2 string:\n");
    gets(S2String);
    printf("The element that we are looking is %i position",any(S1String,S2String));
    
    return 0;
}

int any(char s1[], char s2[]){
    int s1Index;
    int s2Index;
    int isFound = 0;

    for (s2Index = 0; s2Index < strlen(s2);s2Index++){
        if (isFound){
            break;
        }
        s1Index = 0;


        for (s1Index == 0; s1Index < strlen(s1);s1Index++){
            if (s1[s1Index] == s2[s2Index]){
                isFound = 1;
                break;
            }

        }
    }
    return s1Index;
}