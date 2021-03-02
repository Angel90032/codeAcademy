/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/
#include <stdio.h>

typedef struct {
    char arr[50];
    int x;
} key_t;


int main(void){
    key_t myK = {"Tralala",6};
    printf("%s %x",myK.arr,myK.x);
    return 0;
}