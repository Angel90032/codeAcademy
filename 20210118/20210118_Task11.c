#include <stdio.h>

int main() {

int iCounter = 0;

while( ++ iCounter < 3 ) { 
printf("Counter %d\n", iCounter);                               
printf("++ Counter: %d\n", ++ iCounter); 
printf("-- Counter: %d\n", -- iCounter); 
printf("Counter ++: %d\n", iCounter ++); 
printf("Counter --: %d\n", iCounter --);


/* Какво става, ако се препълни броячът?  При iCounter >= 3, не влизаме в while*/

}

return 0;

} 
