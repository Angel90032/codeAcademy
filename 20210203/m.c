#include <stdio.h>

int binarySearch(int a[],int l,int x);

int main(void){
    int iArr[] = {10,20,30,40,50,60,70,80,90,100};
    int iWanted;
    printf("Enter your wanted num:");
    scanf("%i",&iWanted);
    printf("The wanted number is at index %i",binarySearch(iArr,10,iWanted));
    return 0;
}

int binarySearch(int a[], int l, int x){
    int start=0,end=l;
    
    while(end-start>=1){
        int i=start+(end-start)/2;
        if(a[i]==x){
            return i;
        }else if(a[i]<x){
            start=i;
        }else{
            end=i;
        }
    }
    return -1;
}