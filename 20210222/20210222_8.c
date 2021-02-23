/*Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/


#include <stdio.h>
#include <string.h>

union charOrString{
    char someChar;
    char someString[50];
    
};

enum Type {CHR, STR};

struct myStruct{
    union charOrString myValue;
    enum Type myType;
};

void printCHRorSTR(struct myStruct *somePtr){
    if (somePtr->myType == CHR){
        printf("The char is %c\n",somePtr->myValue.someChar);
    }else if (somePtr->myType == STR){
        printf("The string is %s\n",somePtr->myValue.someString);
    }
}

int main(void){
    struct myStruct someStruct1;
    strcpy(someStruct1.myValue.someString,"Booom");
    someStruct1.myType = STR;

    struct myStruct someStruct20;
    someStruct20.myValue.someChar = 'A';
    someStruct20.myType = CHR;
    
    struct myStruct *p1 = &someStruct1;
    struct myStruct *p2 = &someStruct20;

    printCHRorSTR(p1);
    printCHRorSTR(p2);


    
    
    
    return 0;
}