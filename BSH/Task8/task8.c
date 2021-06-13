#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define INT_SIZE sizeof(int) * 8

/*8) Намеретепозициятананай-старшиябит, койтое съсстойност1 в даденочисло.*/

int func1();


// 100101         
// 000001
int main(int argc, char **argv){
    if (argc != 3){
        printf("\nThe program needs 2 arguments\n");
        return 1;
    }

		
    int inputNum = atoi(argv[1]);
    int expectedResult = atoi(argv[2]);
    printf("\nNumber:%d Predicted position: %d\n",inputNum,expectedResult);


    if (atoi(argv[1]) == 0){
        printf("Did you not know that 0 does not have a MSB that is a set ?\n");
        return 2;
    }


    int actualResult = func1(inputNum);
    //int i,order;

    if (expectedResult == actualResult){
        printf("Test with input: %d has predicted and actual result of %d. Passed\n",inputNum,expectedResult);		
        return 0;
    }
    else{
        printf("Test with input: %d has predicted result %d but actual result of %d. Failed\n",inputNum,expectedResult,actualResult);

        return 3;

    }
    
}


int func1(int someNum){
    int i = 0;
    int order = -1;

    for (i= 0; i < INT_SIZE; i++){
        if ((someNum >> i) & 1){
            order = i;
        }
    }


    if (order != -1){
        printf("The highest order set bin in %d is %d\n",someNum, order);
        return order;
    }

}

