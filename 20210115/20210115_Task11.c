#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "Hello";
    char cPos0 = str[0];
    char cPos1 = str[1];
    char cPos2 = str[2];
    char cPos3 = str[3];
    char cPos4 = str[4];
    
    char rts[20] = "";
    printf("%s\n",rts);
    rts[0] = cPos4;
    printf("%s\n",rts);
    rts[1] = cPos3;
    printf("%s\n",rts);
    rts[2] = cPos2;
    printf("%s\n",rts);
    rts[3] = cPos1;
    printf("%s\n",rts);
    rts[4] = cPos0;
    printf("%s\n",rts);

}