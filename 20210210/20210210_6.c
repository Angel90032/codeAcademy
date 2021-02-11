/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи. */

#include <stdio.h>


int linear_search(int a[], int n, int key);

int main(void){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    printf("Enter the searched value:");
    int key;
    scanf("%i",&key);
    printf("The key is found at index %i\n",linear_search(arr,10,key));
    return 0;
}

int linear_search(int a[], int n, int key){
    int *pFirst = a;
    int *pLast = &a[n-1];
    int position = -1;
    while (pFirst <= pLast){
        if (*pFirst == key){
            printf("Address of first %X\n",pFirst);
            printf("Address of zero is %X\n",&a[0]);
            position = (pFirst - &a[0]);
            printf("%i\n",position);
            return position;
        }
        pFirst++;
    }
    return position;

}