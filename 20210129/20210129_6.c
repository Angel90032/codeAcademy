/* Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/

#include <stdio.h>
#include <string.h>

char* decimalToBinary(int someInt);

int main(void){
    printf("Enter an int number:\n");
    int myInt;
    scanf("%i",&myInt);
    printf("The binary number is %s\n",decimalToBinary(myInt));


    return 0;
}


char* decimalToBinary(int someInt){
    char myBinaryString[10000];
    char* myCorrectString;
    char zeroOrOneChar;
    int index = 0;
    while (someInt!=0){
        zeroOrOneChar = (someInt % 2 == 1 ? '1': '0'); 
        myBinaryString[index] = zeroOrOneChar;           
        someInt /= 2;
        index++;
    }
    myCorrectString = strrev(myBinaryString);
    myCorrectString[index+1] = '\0';
    return myCorrectString;
}