/*4. Напишете програма, която копира входа си на изхода,
като замества всеки низ от една или повече шпации, 
с една единствена шпация. */

#include <stdio.h>

int main(void){
    int input = 0;
    int foundSpace = 0;
    while((input = getchar()) != EOF){
        if ((input == ' ') && (foundSpace == 1)){
            continue;
        }else if((input == ' ') && (foundSpace == 0)){
            foundSpace = 1;
            putchar(input);
        }else{
            foundSpace = 0;
            putchar(input);
        }
    
    } 
}