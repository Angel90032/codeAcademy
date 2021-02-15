/*Задача
19 . Дефинирайте стринг : „Baba, kaka, mama” заменете a с o */


#include <stdio.h>


int main(void){
    char myStr[] = "Baba, kaka, mama";
    char *p = myStr;
    while (*p != '\0'){
        if (*p == 'a'){
            *p = 'o';
        }
        p++;
    }
    printf("%s\n",myStr);
    return 0;
}