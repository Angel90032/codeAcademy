#include "f.h"
void reverse(char s[]){
    int j = strlen(s) - 1;
    int i;
    for (i = 0; i < j; i++, j--){
        char ctemp = s[i];
        s[i] = s[j];
        s[j] = ctemp;
    }
}