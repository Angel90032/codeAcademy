/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е по
малък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или 1 ако не се съдържа в масива. */

/* Не работи правилно, но не успях да го направя*/

#include <stdio.h>


int binarySearch(int a[], int Len, int x);

int main(void){
    int myArr[] = {10,20,30,40,50,60,70,80,90,100,};
    int myL = 10;
    int iWanted = 80;
    binarySearch(myArr,myL,iWanted);
    return 0;
}
/*start , len , wanted */
int binarySearch(int a[], int Len, int x){
    int *p = a;
    int searchedIndex;
    static int startIndex = 0;
    int endIndex = Len -1;
    int midIndex = (startIndex + endIndex) / 2;

    
    if (x == a[midIndex]){
        
        printf("The searched element %i is at position %i\n",a[midIndex],midIndex);
        return 0;

    }else if (x < a[midIndex]){
        endIndex = midIndex -1;
        return binarySearch(*p,endIndex,x);

    }else if (x > a[midIndex]) {
        p+= midIndex;
        return binarySearch(*p,endIndex,x);
    }
    printf("The wanted element is not in the array.\n");                           
    return -1; 

           
        
    

}

