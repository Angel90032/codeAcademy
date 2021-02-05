/*Задача 5. Напишете функцията void our_strcat (char *s, char *t), която
добавя конкатенира ) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat () предполага , че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка . Н о не сме разгледали дина м ичното заделяне на памет с
malloc. */

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
    int lenMainStr = 0;

    while(sExtended[lenMainStr]){
        lenMainStr++;
    }
    
    lenMainStr--;
    while (*toAdd != '\0'){
        sExtended[lenMainStr] = *toAdd;
        toAdd++;
        lenMainStr++;
    }
    sExtended[lenMainStr] = *toAdd; /*очаквам да е  '\0' */

    printf("The new string is %s\n",sExtended);
    

}