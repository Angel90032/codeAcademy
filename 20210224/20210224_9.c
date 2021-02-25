/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/

#include <stdio.h>
#define MY_STR(s) #s

int main() {
    int nValue = 0;
printf(MY_STR(nValue));
return 0;
}