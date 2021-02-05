

/*Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг ' 0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията. */

#include <stdio.h>
#include <string.h>



unsigned int my_strlen(char *s);

int main(void){
    printf("Enter your string:\n");
    char myString[1000];
    gets(myString);
    printf("The length of my string is %u\n",my_strlen(myString));

    return 0;
}

unsigned int my_strlen(char *s){

    unsigned int myLen = 0;

    while (s[myLen]){
        myLen++;
    }

    return myLen;
    
}
