/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */

#include <stdio.h>


double average(double *arr);


int main(void){
    
    double myArr[5] = {10.50,20.50,30.50,40.50,3};
    double result = average(myArr);
    printf("My result is %lf\n",result);




    return 0;
}

double average(double *arr){
    int sizeOfarray = 5;
    double *p = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("The size is %i\n",len);
    double total = 0;
    int index = 0;

    while (index < sizeOfarray){
        printf("My total is %lf\n",total);
        total += *p;
        printf("We have added %lf to our total\n",*p);
        index++;
        p++;
    }
    total = total / sizeOfarray;

    return total;
}