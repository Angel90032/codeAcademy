



#include <stdio.h>
#include <string.h>

int atoi(char *s);

int main(void){
    printf("Enter your string:\n");
    char myString[1000];
    gets(myString);
    int result = atoi(myString);
    printf("My number is %i\n",result);
    printf("My number plus 100 is: %i\n",result+100); /* To prove that my answer is indeed an int*/
    printf("Mu number * 2 = %i\n",result * 2);
    return 0;
}




int atoi (char s[]){
    int lastIndex = strlen(s) - 1;
    char *p1 = &s[lastIndex];
    int myNumber = 0;
    int multiplier = 1;

    while(lastIndex >= 0){
        myNumber += ((int)(*p1 - '0')) * multiplier;
        multiplier *= 10;
        lastIndex--;
        p1--;


    }
    return myNumber;

}




