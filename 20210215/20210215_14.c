/*14.Решете задачата за генериране на 6 буквена парола с пойнтери
Задача 14.*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int passGenerator(void);
int likeOrNotThePass(void);

int main(void){
    passGenerator();
    return 0;
}

int passGenerator(void){
    srand(time(0));
    char myPassword[7]= "      ";
    char *p = myPassword;
    char *pLastElement = &myPassword[strlen(myPassword)-1];
    int counter = 0;
    while (counter <strlen(myPassword)){
        int intElement;
        intElement = (rand()% (90 + 1 - 65) + 65); /* ASCII number for A to Z */
        char element = intElement + '\0';
        *p = element;
        p++;
        counter++;
        printf("The current password is %s\n",myPassword);
    }
    likeOrNotThePass();
    return 0;
}

int likeOrNotThePass(void){
    printf("Do you want to change your password? Press 1 for yes and 0 for no.\n");
    int answer;
    scanf("%i",&answer);
    if(answer){
        passGenerator();
    }else{
        printf("Yes I agree with you.Your password is pretty cool!\n");
    }

}
