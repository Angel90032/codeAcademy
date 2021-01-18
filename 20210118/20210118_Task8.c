#include <stdio.h>

int isLetter(char c){
    if ((c >= 65) && (c <= 90) || ((c >= 97) && (c<=122))){
        printf("Your symbol is a letter");
    }
    else {
        printf("Your symbol is NOT a letter");

    }

    return 0;
}

int main(void){
    char result;
    result = getchar();
    isLetter(result);


}