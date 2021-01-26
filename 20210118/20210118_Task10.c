#include <stdio.h>

int main() {
int nResult = 13;
int nX = 4;

printf("Result = %d\n", nResult); 
nResult += nX;

printf("Result += %d -> %d\n", nX, nResult); 
nResult = 1;

nResult <<= nX;
printf("Result <<= %d -> %d\n", nX, nResult);

int myResult = 50;
int myX = 10;

printf("Result = %d\n",myResult);

myResult *= myX;
printf("Result = %d\n",myResult);

myResult -= myX;
printf("Result = %d\n",myResult);

myResult >>= myX;
printf("Result = %d\n",myResult);

}
