/*Задача 11.
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/


#include <stdio.h>

int main(void){
    FILE *fPtr;
    fpos_t * position;

    fPtr = fopen("fileTask11.txt","w");
    fputs("ABCD EFG",fPtr);
    fgetpos(fPtr,&position);
    printf("%i",position);
    fclose(fPtr);

    return 0;
}