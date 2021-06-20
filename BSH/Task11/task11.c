#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
    int firstNumber = atoi(argv[1]);
    int secondNumber = atoi(argv[2]);
    int expectedResult = atoi(argv[3]);
 
    printf("First number: %d\n", firstNumber);
    printf("Second number: %d\n", secondNumber);
 
    int *p1 = &firstNumber;
    int *p2 = &secondNumber;
    int actualResult = (*p1) * (*p2);
 
    if(actualResult != expectedResult){
        printf("The expected result was: %d\n", expectedResult);
        printf("The result we got is: %d\n", actualResult);
        printf("The result is different from the expected one\n");
	printf("------------------\n");
        return 1;
    } else {
        
        printf("The expected result was: %d\n", expectedResult);
        printf("The result we got is: %d\n", actualResult);
        printf("Alles gut\n");
	printf("------------------\n");
    }
    
    return 0;
}
