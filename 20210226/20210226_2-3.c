/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/

/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/

#include <stdio.h>


typedef long long int t_llint;
typedef  t_llint * t_ptr;


int main(void){
    t_llint x = 100;
    printf("%li\n",x);
    t_ptr myP = &x;
    printf("%li\n",*myP);


    return 0;
}

