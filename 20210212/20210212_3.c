/*Задача.3 Напишете функции , с помощта на които да реализирате динамичен
масив от елементи , чиято големина може да се променя по време на
изпълнение на програмата*/

/*Отделих 3 часа на задачата, нямам идея защо гърми*/

#include <stdio.h>
#include <stdlib.h>

int memoryChange(int *arr,int *pCurrent);
int enterNumbers(int *arr,int len, int *pCurrent);
int printArr(int *arr,int len,int *myLastElement);
extern int *iArr;


int main(void){
    int initialSize;
    int *iArr = NULL; 
    
    printf("Enter your initial size:\n");
    scanf("%i",&initialSize);
    iArr = (int*) malloc(initialSize * sizeof(int));
    if (NULL == iArr){
        printf("Allocation memory error!\n");
        exit(1);
    }
    enterNumbers(iArr,initialSize,iArr);
    return 0;
}

int enterNumbers(int *arr,int len, int *pCurrentPosition){
    int Newlen = len;
    int *p = NULL;
    p = pCurrentPosition;
    printf("*p points to %d\n",p);
    printf("The first element of the arr is with address %d\n",arr);
    int *pLastElement = (arr + (Newlen -1));
    printf("The last element of the arr is at memory %d\n",pLastElement);

    while (p <= pLastElement){
        int valueToAdd = 0;
        printf("EEEEEnter your element:\n");
        scanf("%i",&valueToAdd);
        *p = valueToAdd;
        printf("Value %i added at place %d\n",*p,p);
        p++;
    }
        
    if (p > pLastElement){
        int answer;
        printf("Your arr is full,you should allocate more memory to it.\n");
        printf("Press 1 to allocate more memory or press 0 to ignore.\n");
            
        scanf("%i",&answer);
        if(answer){
            memoryChange(arr,p);
        }
    }
    printArr(arr,Newlen,pLastElement); 
    
    return 0;
}

int memoryChange(int *arr, int *pCurrentPosition){
    int *p1 = NULL;
    p1 = pCurrentPosition;
    int newSize;
    printf("Enter the new size of the arr:\n");
    scanf("%i",&newSize);
    arr = realloc(arr, newSize * sizeof(int));
    if (NULL == arr){
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Address of reallocated memory is %d\n",arr);
    enterNumbers(arr,newSize,p1);
    return 0;

}

int printArr(int *arr,int len,int *myLastElement){
    printf("Address of the first element %i\n",arr);
    printf("Address of the last element %i\n",myLastElement);
    int *pToPrint = arr;
    int *end = pToPrint+(len-1);
    while(pToPrint <= end){ /* myLastElement */
        printf("%i at address %i\n",*pToPrint,pToPrint);
        pToPrint++;
    }
    free(arr);
    return 0;
}
    


