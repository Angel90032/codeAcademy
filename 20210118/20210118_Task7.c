#include <stdio.h>
int main(void){
int	nA = 1;	
int	nB = (nA == 1 ? 2:0);
printf("A value is %d\n", nA); 
printf("B value is %d\n", nB);
scanf("%d",&nA);
nB = (nA == 1 ? 2:0);
printf("A value is %d\n", nA); 
printf("B value is %d\n", nB);

}



