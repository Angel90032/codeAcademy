/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */


#include <stdio.h>
#include <string.h>

void our_strcat(char *sExtended, char *toAdd);

int main(void){
    char sToBeExtended[1000];
    char sToBeAdded[500];
    printf("Enter your first string:\n");
    fgets(sToBeExtended,1000,stdin);
    printf("Enter your second string:\n");
    fgets(sToBeAdded,500,stdin);
    our_strcat(sToBeExtended,sToBeAdded);

    return 0;
}

void our_strcat(char *sExtended, char *toAdd){
    printf("The value of the first string is %s\n",sExtended);
    printf("The value of the second string is %s\n",toAdd);
    char *p1 = sExtended;
    char *p2 = toAdd;
    
    

    while(*p1 != '\0'){
        printf("The first pointer value is %X\n",p1);
        printf("The value is %c\n",*p1);
        p1++;
    }
    
    p1--;
    while (*p2 != '\0'){
        printf("The first pointer value is %X\n",p1);
        printf("The value is %c\n",*p1);
        printf("The second pointer value is %X\n",p2);
        printf("The value to add is %c\n",*p2);
        *p1 = *p2;
        printf("The NEW value is %c\n",*p1);
        p2++;
        p1++;
    }
    *p1 = *p2; /*очаквам да е  '\0' */

    printf("The new string is %s\n",sExtended);
    printf("The L of the string is %i\n",strlen(sExtended));
    if (sExtended[11] == '\0'){
        printf("Yesss");
    }
    

}