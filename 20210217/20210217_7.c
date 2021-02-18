/*Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква.*/

#include <stdio.h>
#include <string.h>

void countingLetters(char *someArr);

int main(){
    char myString[1000];
    printf("Enter your string\n");
    fgets(myString,sizeof(myString),stdin);
    countingLetters(myString);
    return 0;

}

void countingLetters(char *someArr){
    int letterCounter[26] = {0};
    char *p = someArr;

    while(*p != '\0'){
        char currentLetter = *p;
        switch (currentLetter){
        case ('A'):
        letterCounter[0]++;
        break;

        case ('B'):
        letterCounter[1]++;
        break;

        case ('C'):
        letterCounter[2]++;
        break;

        case ('D'):
        letterCounter[3]++;
        break;

        case ('E'):
        letterCounter[4]++;
        break;

        case ('F'):
        letterCounter[5]++;
        break;

        case ('G'):
        letterCounter[6]++;
        break;

        case ('H'):
        letterCounter[7]++;
        break;

        case ('I'):
        letterCounter[8]++;
        break;

        case ('J'):
        letterCounter[9]++;
        break;

        case ('K'):
        letterCounter[10]++;
        break;

        case ('L'):
        letterCounter[11]++;
        break;

        case ('M'):
        letterCounter[12]++;
        break;

        case ('N'):
        letterCounter[13]++;
        break;

        case ('O'):
        letterCounter[14]++;
        break;

        case ('P'):
        letterCounter[15]++;
        break;

        case ('Q'):
        letterCounter[16]++;
        break;

        case ('R'):
        letterCounter[17]++;
        break;

        case ('S'):
        letterCounter[18]++;
        break;

        case ('T'):
        letterCounter[19]++;
        break;

        case ('U'):
        letterCounter[20]++;
        break;

        case ('V'):
        letterCounter[21]++;
        break;

        case ('W'):
        letterCounter[22]++;
        break;

        case ('X'):
        letterCounter[23]++;
        break;

        case ('Y'):
        letterCounter[24]++;
        break;

        case ('Z'):
        letterCounter[25]++;
        break;
    
      
        }
        p++;
    /*A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.*/
    }
    printf("The number of A-s is %i\n",letterCounter[0]);
    printf("The number of B-s is %i\n",letterCounter[1]);
    printf("The number of C-s is %i\n",letterCounter[2]);
    printf("The number of D-s is %i\n",letterCounter[3]);
    printf("The number of E-s is %i\n",letterCounter[4]);
    printf("The number of F-s is %i\n",letterCounter[5]);
    printf("The number of G-s is %i\n",letterCounter[6]);
    printf("The number of H-s is %i\n",letterCounter[7]);
    printf("The number of I-s is %i\n",letterCounter[8]);
    printf("The number of J-s is %i\n",letterCounter[9]);
    printf("The number of K-s is %i\n",letterCounter[10]);
    printf("The number of L-s is %i\n",letterCounter[11]);
    printf("The number of M-s is %i\n",letterCounter[12]);
    printf("The number of N-s is %i\n",letterCounter[13]);
    printf("The number of O-s is %i\n",letterCounter[14]);
    printf("The number of P-s is %i\n",letterCounter[15]);
    printf("The number of Q-s is %i\n",letterCounter[16]);
    printf("The number of R-s is %i\n",letterCounter[17]);
    printf("The number of S-s is %i\n",letterCounter[18]);
    printf("The number of T-s is %i\n",letterCounter[19]);
    printf("The number of U-s is %i\n",letterCounter[20]);
    printf("The number of V-s is %i\n",letterCounter[21]);
    printf("The number of W-s is %i\n",letterCounter[22]);
    printf("The number of X-s is %i\n",letterCounter[23]);
    printf("The number of Y-s is %i\n",letterCounter[24]);
    printf("The number of Z-s is %i\n",letterCounter[25]);
}

