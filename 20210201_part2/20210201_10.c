#include <stdio.h>
#include "f.h"

/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[]. */


void itob(int n, char s[],int b);


int main(){
    printf("Enter your number and 2 for binary, 8 for octal or 16 for hexadecimal:\n");
    int b;
    int myNum;
    char myString[1000];
    scanf("%i %i",&myNum, &b);
    itob(myNum,myString,b);

    return 0;
}

void itob(int n, char s[],int b){
    do{
        static int index = 0;
        char element = ((n % b) + '0');
        s[index] = element;
        index++;
        n = n / b;
 
    }while ( n > 0);

    reverse(s);
    /*printf("The string is %s\n",s);*/

    if ( b == 16){
        int someIndex;
        for (someIndex = 0; someIndex < strlen(s)-1; someIndex++){

            switch (s[someIndex]){

                case (':'):
                    s[someIndex] = 'A';
                    break;
                case (';'):
                    s[someIndex] = 'B';
                    break;
                case ('<'):
                    s[someIndex] = 'C';
                    break;
                case ('='):
                    s[someIndex] = 'D';
                    break;
                case ('>'):
                    s[someIndex] = 'E';
                    break;
                case('?'):
                    s[someIndex] = 'F';
                    break;
            }
            

        }
        
    }
    printf("The string is %s\n",s);
}