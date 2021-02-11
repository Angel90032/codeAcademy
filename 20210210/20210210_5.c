/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}*/

#include <stdio.h>

int sum_arr(int a[], int l);

int main(void){
    int myArr[5] = {10,20,30,40,50};
    printf("The total is %i\n",sum_arr(myArr,5));
    return 0;
}

int sum_arr(int a[],int l){
    int *pFirst = a;
    int *pLast = &a[l-1]; 
    int total = 0;

    while(pFirst <= pLast){
        total += *pFirst;
        pFirst++;

    }
    return total;
}