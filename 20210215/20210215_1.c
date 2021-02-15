

/*Задача 1. Да напишем функция char *month_name(int n), която връща указател*/;

#include <stdio.h>

char *month_name(int n);

int main(void){
    printf("Enter a number:\n");
    int n;
    scanf("%i",&n);
    char * result = month_name(n);
    printf("Your month is %s.\n",result);
    return 0;
}


char *month_name(int n){
    static char *name[] = {
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    if (n < 1 || n > 12){
        return name[0];
    }
    return name[n];
}

