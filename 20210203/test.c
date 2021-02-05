#include <stdio.h>
#include <string.h>

int main () {
   int iArr[] = {10,20,30,40,50,60};
   int *p = iArr;
   printf("%i\n",*p);
   p += 3;
   printf("%i\n",*p);
}