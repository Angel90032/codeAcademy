#include <stdio.h>

int main(void){

    int iSomeInt = 0;

    for (;;){
        iSomeInt++;
        if (iSomeInt == 48){
            break; 
        } 
        printf("%i\n",iSomeInt);
        

    }
}