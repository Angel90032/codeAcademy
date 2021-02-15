

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc( const void *a, const void *b);
void Sort(char str[]);


int main() {
  char myStr[50];
  printf("Enter your string:\n");
  fgets(myStr,sizeof(myStr),stdin);
  Sort(myStr);
  return 0;
}

int cmpfunc( const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

void Sort( char str[] ) {
  qsort(str, (size_t) strlen(str), (size_t) sizeof(char), cmpfunc);
  printf("%s\n", str);
}