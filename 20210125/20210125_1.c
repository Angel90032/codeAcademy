/* Пребройте символите, подавани на конзолата, с
функцията
getchar(); */

#include <stdio.h>



int main(void){
    int someInput;
    someInput = getchar();
    int counter = 0;
    
    while(someInput != EOF){
        someInput = getchar();
        counter++;
    }
    printf("\n%d",counter);
    return 0;

}