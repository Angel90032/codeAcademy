/*13. Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/


#include <stdio.h>
#include <string.h>

int findLen(char *someString);

int main(void){
    char myString[50];
    printf("Enter your string:");
    fgets(myString,sizeof(myString),stdin);
    int result = findLen(myString);
    printf("The length of the string is %i\n",result);
    
    return 0;
}

int findLen(char *someString){
    int counter = 0;
    char *p = someString;
    while (*p != '\0'){
        counter++;
        p++;
    }
    return counter;
}