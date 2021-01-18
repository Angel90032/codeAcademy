#include <stdio.h>
#include <string.h>

int isLargerThan80( char s[]){
    int result;

    result = ( strlen(s) > 80 ? 1:0);

    if(result){
        printf("Your string has more than 80 symbols");
    }else{
        printf("Your string does NOT have more than 80 symbols");

    }


}


int main(){
    char userInput[10000];
    printf("Enter your string:\n");
    gets(userInput);
    isLargerThan80(userInput);
    return 0;
}