#include <stdio.h>

int main(void) {

int nX;
int nY = 20;
scanf("%i",&nX);

if (nX == nY) {
printf("%d and %d are equal\n", nX, nY); 
} 
else {
printf("%d and %d are not equal\n", nX, nY);
}

if (nX > nY) { printf("%d is greater than %d\n", nX, nY);

}
if (nX != nY) {
printf("%d and %d are not equal\n", nX, nY); 
} 
else {
printf("%d and %d are  equal\n", nX, nY);
}

if (nX < nY) { 
    printf("%d is greater than %d\n", nY, nX);
} 

}
