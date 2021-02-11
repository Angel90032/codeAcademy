/*Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.*/


#include <stdio.h>

void sort ( int a[], int n);

int main(void){
    int arr[6] = { 20, 10, 5, 6, 7, 80};
    sort(arr,6);
    return 0;
}

void sort ( int a[], int n){

    int i, j, temp;
    int *pFirst = a;
    int *pLast = &a[n-1];
    int *pEnd = &a[n];
    for ( pFirst; pFirst < pEnd -1; ++pFirst )
        for ( pLast = pFirst + 1; pLast < pEnd; ++pLast )
            if ( *pFirst > *pLast ) {
                temp = *pFirst;
                *pFirst = *pLast;
                *pLast = temp;
    }
    int loop;
    for(loop = 0; loop < 6; loop++)
      printf("%d ", a[loop]);
}