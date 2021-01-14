#include <stdio.h>

int main(){
    int myNum = 1440; 
    int mask = 3067833782;   
    
    int result = myNum ^ mask;
    result = ~(result);
    result *= -1;
    printf("%d",result);
    return 0;
}