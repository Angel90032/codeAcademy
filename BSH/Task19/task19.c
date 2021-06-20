#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
    srand(time(NULL));
 
    int firsArray[9];
    int secondArray[9];
    int i = 0;
 
    for(i;i < 10; i++){
        firsArray[i] = rand() % (20 + 1 - 0) + 0;
        secondArray[i] = rand() % (20 + 1 - 0) + 0 ;
        int result = firsArray[i] * secondArray[i];
        printf("Result # %d: %d * %d = %d\n", i+1, firsArray[i], secondArray[i], result);
        if ((result < 0) || (result > 400)){
            printf("The program broke\n");
            return 1;
        }
        printf("All good.\n");
    }
    return 0;
}
