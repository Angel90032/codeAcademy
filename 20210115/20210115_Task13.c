#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char str[] = "Hello";
    char cPos0 = tolower(str[0]);
    char cPos1 = tolower(str[1]);
    char cPos2 = tolower(str[2]);
    char cPos3 = tolower(str[3]);
    char cPos4 = tolower(str[4]);
    
    char rts[] = {};
    rts[0] = cPos0;
    rts[1] = cPos1;
    rts[2] = cPos2;
    rts[3] = cPos3;
    rts[4] = cPos4;
    printf("%s\n",rts);

}