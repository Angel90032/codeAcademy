/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/
#include <stdio.h>

typedef int t_i[5];


int main(void){

    t_i arr = {5,10,20,30,40};
    for (int i = 0; i < 5;i++){
        printf("%i ",arr[i]);
    }
    return 0;
}