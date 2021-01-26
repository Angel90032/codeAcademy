/*Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar(); */

#include <stdio.h>

int main(void){
    int c;
    c = getchar();
    int newLineCounter = 0;
    while(c != EOF){
        if (c == '\n'){
            newLineCounter++;
        }
        c = getchar();

    }
    printf("%i\n",newLineCounter);
}