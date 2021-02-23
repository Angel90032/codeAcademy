/*Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/

#include <stdio.h>
#include <string.h>

union myUn{
    int x;
    float y;
    char arr[20];
    
};

int main(void){
    union myUn var;
    var.x = 10;
    var.y = 20.50;
    strcpy(var.arr,"BOBBY");

    printf("X = %i Y = %f Arr = %s\n",var.x,var.y,var.arr);
    
    return 0;
}