/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.*/

#include <stdio.h>

union myUn{
    char a : 6;
    unsigned short x : 6;
}someUn;

int main(void){
    someUn.a = '!';
    someUn.x = 10;

    printf("%c %hu",someUn.a,someUn.x);

}