/*Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях? */

#include <stdio.h>


int main(void){
    int intArr[] = {100,90,80,70,60,50,40,30,20,10};
    int *p = &(intArr[0]);  /* пойнтърът сочи към първия елемент на масива.*/
    /* int *p = intArr */   /*пойнтърът сочи към името на масива, което от своя страна сочи към първия елемент на масива. */
}