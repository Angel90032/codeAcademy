/*Задача
18 . Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране
, започвайки отзад напред
*to-- =  *from--
Проверете
готовата функция strlen
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране , дали
размерът на стринга , в който копираме , не е по малък от размера на
стринга , от който копираме , и какво да се случва тогава*/




#include <stdio.h>
#include <string.h>

int cStr(char *str1, char *str2, char *str3,char *str4);
int main(void){
    char *string1 = "A string to be copied.";
    char *string3 = "I am very good in strings coping!";
    char string2[25];
    char string4[100];
    printf("The size of str1 is %i the L of str 1 is %i\n",sizeof(string1),strlen(string1));
    printf("The size of str3 is %i the L of str 3 is %i\n",sizeof(string3),strlen(string3));
    printf("The size of str2 is %i\n",sizeof(string2));
    printf("The size of str4 is %i\n",sizeof(string4));
    
    cStr(string1,string2,string3,string4);
    printf("%s\n",string2);
    printf("%s\n",string4); 
    return 0;
}


int cStr(char *str1, char *str2, char *str3,char *str4){
    if (sizeof(str2) < strlen(str1)){
        printf("Not enough space in destination string from 1 to 2.\n");
        /*exit(1)*/
        /* не знам защо влиза в този if, при положение, че 25 > 22 */
    }
    char *pNewSource = &(str1[strlen(str1)]);
    char*pNewDestination = &(str2[strlen(str1)]);
    while(pNewSource >=str1){

        *pNewDestination--= *pNewSource--;
        /**str2 = *str1;
        str1++;
        str2++; */
    }
    

    if (sizeof(str4) < strlen(str3)){
        printf("Not enough space in destination string from 3 to 4.\n");
        /*exit(2)*/
        /* не знам защо влиза в този if, при положение, че 100 > 33 */
    }
    char *pNewSource2 = &(str3[strlen(str3)]);
    char *pNewDestination2 = &(str4[strlen(str3)]);
    while(pNewSource2 >= str3){
        *pNewDestination2--= *pNewSource2--;
        /**str4 = *str3;
        str3++;
        str4++;*/
    }
    return 0;
    
}