/*Задача 15
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1.
Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2.
При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3.
Програмата вади числата, нужни за избраната игра (5 или 6).*/


#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

void fiveOf35(void);
void sixOf42(void);
void sixOf49(void);
void shuffle(int *array, size_t n);
int SIZE35[36] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35};
int SIZE42[43] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42};
int SIZE49[50] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49};


int main(void){
    srand(time(NULL));
    int choice;
    printf("Choose 1 for 5/35, choose 2 for 6/42 choose 3 for 6/49\n");
    scanf("%i",&choice);
    switch (choice){
    case (1):
        fiveOf35();
        break;
    case (2):
        sixOf42();
        break;
    case (3):
        sixOf49();
        break;

    }
    

    return 0;
}

void fiveOf35(void){
    shuffle(SIZE35,36);
    int i;
    for (i = 0; i < 5; i++){
        printf("%i is the %i winning number\n",SIZE35[i],(i+1));
    }
}

void sixOf42(void){
    shuffle(SIZE42,43);
    int i;
    for (i = 0; i < 6; i++){
        printf("%i is the %i winning number\n",SIZE42[i],(i+1));
    }
}

void sixOf49(void){
    shuffle(SIZE49,50);
    int i;
    for (i = 0; i < 6; i++){
        printf("%i is the %i winning number\n",SIZE49[i],(i+1));
    }
}


    



/* Arrange the N elements of ARRAY in random order.
   Only effective if N is much smaller than RAND_MAX;
   if this may not be the case, use a better random
   number generator. */
void shuffle(int *array, size_t n){
    if (n > 1) 
    {
        size_t i;
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = array[j];
          array[j] = array[i];
          array[i] = t;
        }
    }
}