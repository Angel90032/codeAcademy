/*Задача 3. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/

#include <stdio.h>

#define DEBUG 10

void debugMsg(const char *pszMsg){
    #ifdef DEBUG
    printf("DEBUG: %s\n",pszMsg);
    #endif
}

int main(void){
    debugMsg("Lalala");
    return 0;
}