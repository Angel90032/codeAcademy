#include <stdio.h>
#include <math.h>

/*  Направете функция, която получава като параметър число. 
    Неговите битове ще третираме по следния начин - 
    първите 5 бита (най-младшите) представляват едно число(5 bit-ово), 
    следващите 5 - друго число и тн. 
    Изведете на стандартния изход числата, "закодирани" в оригиналното число. */


unsigned long long decimalToBinary(int decimalnum);
void binaryToString();

int main(void){
    int input;
    printf("Enter a whole number\n");
    scanf("%i",&input);
    printf("The binary number is: %lu\n",decimalToBinary(input));
    printf("The size of the binary number is: %lu\n",sizeof(decimalToBinary(input)));
}

unsigned long long decimalToBinary(int decimalnum){
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0){
        rem = decimalnum%2;
        decimalnum /= 2;
        binarynum += rem*temp;
        temp *= 10;
    }
    return binarynum;
}

