/*Задача 16
Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./*/

#include <stdio.h>

int arr1[8] = {10,20,30,40,50,60,190,200};
int arr2[8] = {5,15,55,75,99,101,105,500};
int finalArr[16] = {0};


int main(void){
    int *p1 = arr1;
    int *p2 = arr2;
    int *p1Last = &(arr1[7]);
    int *p2Last = &(arr2[7]);
    int *pDestination = finalArr;
    int counter;
    for ( counter = 0; counter < 16;counter++) {
        if (*p1 <= *p2 ){
            printf("Address of p1 %X, address of p2 %X, address of p1Last %X\n",p1,p2,p1Last);
            printf("Value of p1 %i value of p2 %i\n",*p1,*p2);
            *pDestination = *p1;
            printf("Value that we have added %i\n", *pDestination);
            pDestination++;
            
            if (*p1 != *p1Last){
                p1++;
            }else if( *p1 == *p1Last){
                printf("We have reached the last element in arr1\n");
                *p1 = 2147483646;
            }
            
            
        }else if( *p1 > *p2){
            printf("Address of p1 %X, address of p2 %X, address of p2Last %X\n",p1,p2,p2Last);
            printf("Value of p1 %i value of p2 %i\n",*p1,*p2);
            *pDestination = *p2;
            printf("Value that we have added %i\n", *pDestination);
            pDestination++;
            if (*p2 != *p2Last){
                p2++;
            }else if( *p2 == *p2Last){
                printf("We have reached the last element in arr1\n");
                *p2 = 2147483646;
            }
       
        }
    }
    int index;

    for (index = 0; index < 16; index++){
        printf("%i ",finalArr[index]);
    }


    return 0;
}