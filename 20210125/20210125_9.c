/*Задача 9.
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки. */
#include <stdio.h>

int main(void){
    int text;

    while((text=getchar()) != EOF){
        if((text>= 65) && (text<= 90)){
            text+= 32;
        }
        putchar(text);

    }
}