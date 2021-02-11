/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/

#include <stdio.h>
#include <string.h>

void myReverse(char *str);

int main(void){
    char myStr[100];
    printf("Enter your string:\n");
    /*gets(myStr);*/
    fgets(myStr,100,stdin);
    myReverse(myStr);
    return 0;
}

void myReverse(char *str){
    char *p = &str[strlen(str)-1];

    while(p >= &str[0]){
        printf("%c",*p);
        p--;
    }
}
