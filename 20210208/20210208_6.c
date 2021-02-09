/*6. Напишете функция, която получава указател към масив с числа и връща
най голямото от тях. */
#include <stdio.h>


int maxValue(int *arr,int arrLen);

int main(void){
    int myArr[10] = {10,500,600,200,2500,60,28,98,9004,1014};
    int mySize = sizeof(myArr) / sizeof(myArr[0]);
    int result = maxValue(myArr,mySize);
    printf("The max value is %i\n",result);
    return 0;
}


int maxValue(int *arr,int arrLen){
    int maxValue = -2147483648;
    int index = 0;

    while (index < arrLen){
        if (arr[index] > maxValue){
            maxValue = arr[index];
        }
        index++;
    }
    return maxValue;
}