/*Задача 7.
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа. */
#include <stdio.h>

int counter = 0;
char text;

int main(void){
    while((text = getchar())!= EOF){
        counter++;
        if (counter > 80){
        putchar(text);
        }  
    }
                  
}