#include <stdio.h>
#include <string.h>

void my_strlen(char s[]){
    int i = 0;
    while(s[i] != '\0');
    printf("The symbol at index %i is %i",i,s[i]);
    i++;
    
}

int main(void){
    char myWord[] = "Hello";
    my_strlen(myWord);
}