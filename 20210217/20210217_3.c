/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}*/


#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);
int fnMultiply(int nA, int nB);
int fnDevide(int nA, int nB);


int main(){
    int (*p) (int a, int b) = NULL;
    /*void (*func_ptr[4])() = {fnPlus,fnMinus,fnMultiply,fnDevide}; не разбирам целта на този ред*/
    int choice,x,y;
    printf("Select your function\n");
    scanf("%i",&choice);
    printf("Enter your 2 numbs\n");
    scanf("%i %i",&x,&y);
    if (choice == 0){
        p = fnMinus;
    }else if(choice == 1){
        p = fnPlus;
    }else if(choice == 2){
        p = fnMultiply;
    }else if(choice == 3){
        p = fnDevide;
    }
    int result = (*p)(x,y);
    printf("The result is %i\n",result);
    


    return 0;
}

int fnPlus(int nA, int nB){
    return (nA + nB);
}

int fnMinus(int nA, int nB){
    return (nA - nB);
}

int fnMultiply(int nA, int nB){
    return (nA * nB);
}

int fnDevide(int nA, int nB){
    return (nA / nB);
}