/*Задача14
Напишете програма , която да проверява дали 2 стринга масива ) са
анаграми и имат всичките букви на другата дума . Използвайте функции*/

#include <stdio.h>
#include <string.h>

void lettersChecker(char arr1[],char arr2[]);


int main(void){
    char firstArr[100];
    char secondArr[100];
    printf("Enter your first string\n");
    fgets(firstArr,100,stdin);
    printf("Enter your second string\n");
    fgets(secondArr,100,stdin);
    lettersChecker(firstArr,secondArr);
    return 0;
}


void lettersChecker(char arr1[],char arr2[]){
    char *p1 = arr1;
    /*char *p2 = NULL;*/
    int x,y;
    int isFound;
    int sum = 0;

    while(*p1 != '\0'){
        int isFound = 0;
    
        char *p2 = &(arr2[0]);
        while( *p2 != '\0'){
            if (*p1 == *p2 && *p1 != '\0' && *p2 != '\0'){
                isFound = 1;
                /*printf("%c found\n",*p1);*/
                break;
            }
            p2++;
        }
        p1++;
        if(*p1 && *p2){
            sum+=isFound;
            printf("The current sum is %i\n",sum);
        }

    }
    int result = (strlen(arr1)-1 == sum ? 1:0);
    int sameL = (strlen(arr1) == strlen(arr2) ? 1:0);
    

    if ((result) && (sameL)){
        printf("The 2 strings are anagrams");
    }else{
        printf("The 2 strings are not anagrams");
    }


}
