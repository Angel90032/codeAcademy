#include <stdio.h>


int main(void){
    int arr[10] = {0};
    int*p = arr;
    int i;

    for (i = 0; i < 10; i++){
        printf("%i",*p);
        p++;
    }
    

    return 0;
}