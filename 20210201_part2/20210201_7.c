/* Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/
/* Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

#include <stdio.h>

int sumFromTo(int x , int y);

int main(void){
    int a, b;
    printf("Enter 2 int numbers:\n");
    scanf("%i %i",&a,&b);
    printf("The result is %i\n",sumFromTo(a,b));
    return 0;
}

int sumFromTo(int x, int y){
    static int mySum = 0;

    while (x != y){
            printf("mySum is %i\n",mySum);
            mySum += x;
            printf("X before ++ is %i\n",x);
            printf("mySum after +x is %i\n",mySum);
            
            x++;
            printf("X after ++ is %i\n",x);
            printf("Y is %i\n",y);
            sumFromTo(x,y);
        }
    return mySum;   
    
}