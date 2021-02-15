/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/


#include <stdio.h>


int main(void){
    char chr = 'A';
    char *p = &chr;
    printf("The address of p is %p\n",&p);
    printf("The address of chr is %p",p);

    return 0;
}