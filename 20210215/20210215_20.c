/*Задача20 . Дефинирайте стринг „I am a poor
Заменете през пойнтер “poor” с “great"*/

#include <stdio.h>
#include <string.h>

int main(void){
    char myStr[] = "I am a poor programmer.";
    char destination[24];
    char *pSource = myStr;
    char *pDestination = destination;

    int counter;

    for ( counter = 0; counter < 7;counter ++){
        *pDestination = *pSource;
        pSource++;
        pDestination++;

  
    }
    if (counter == 7){
            *pDestination = 'g';
            *(pDestination+1) = 'r';
            *(pDestination+2) = 'e';
            *(pDestination+3) = 'a';
            *(pDestination+4) = 't';
        }
    char *p1 = &(myStr[11]);
    char *p2 = &(destination[12]);
    while(*p1){
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    printf("%s",destination);

    return 0;
}