/*Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */
#include <stdio.h>
#include <string.h>

void reverse(char initialS[]);

int main(void){
    char input[10000];
    printf("Enter your string:\n");
    gets(input);
    reverse(input);

}

void reverse(char initialS[]){
    char revS[10000];
    int lenMyStr = strlen(initialS);
    printf("Len of initial string is %d\n",lenMyStr);
    int counter = 0;
    int indexofInitial = lenMyStr -1;
    

    for (counter = 0; counter <=(lenMyStr -1); counter++){
        revS[counter] = initialS[indexofInitial];
        indexofInitial--;
           
    }
    printf("My reversed is %s\n",revS);



}