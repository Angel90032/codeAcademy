/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1.*/

#include <stdio.h>

int main(void){
    int myArr[20]= {0};
    myArr[1] = 1;
    int *pFirst = myArr;
    int *pSecond = &(myArr[1]);
    int *pThird = &(myArr[2]);

    while(pThird != &(myArr[20])){
        *pThird = (*pFirst) + (*pSecond);
        pFirst++;
        pSecond++;
        pThird++;
    }
    int i;

    for (i = 0; i <20;i++){
        printf("%i\n",myArr[i]);
    }
    return 0;
}