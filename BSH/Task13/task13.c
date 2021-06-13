#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[] ){

    if (argc != 3){
        printf("\nEnter 2 arguments.\n");
        return 1;
    }
    printf("\nInput: %s.Prediction: %s\n",argv[1],argv[2]);
    int i;
    int n = strlen(argv[1]);
    char actualResult[n];
    for (i = 0; i < n; i++){
        char letter = argv[1][i];
        if (letter >= 65 && letter <= 90){
            letter += 32;
        }
        actualResult[i] = letter;
            
    }
 
    if (!strcmp(argv[2],actualResult)){
        printf("Expected result equals actual result: %s\n",actualResult);
        return 0;
    }
    else {
        printf("Expected result %s is not equal to the actual result: %s\n",argv[2],actualResult);
        return 2;
    }
    
    

}
