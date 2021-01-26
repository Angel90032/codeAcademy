/* 3.Напишете програма, която преброява шпациите, табулациите и
новите редове.*/

#include <stdio.h>

int main(void){
    char input;
    int tabCounter = 0;
    int newLineCounter = 0;
    int spaceCounter = 0;
    

    while ((input = getchar()) != EOF){
        if (input == ' '){
            spaceCounter++;
        }
        else if(input == '\n'){
            newLineCounter++;
        }
        else if(input == '\t'){
            tabCounter++;
        }
        

    }
    printf("Tab count is:%i\nSpace count is:%i\nNew lines are: %i",tabCounter,spaceCounter,newLineCounter);


}