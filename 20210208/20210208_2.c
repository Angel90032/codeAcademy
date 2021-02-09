/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */


#include <stdio.h>

int array2D(int arr[4][5]);

int main(void){
    int myArr[4][5] = {0};
    array2D(myArr);
    return 0;
}


int array2D(int arr[4][5]){
    int x, y;

    for (x = 0; x < 4;x++){
        for (y = 0; y < 5; y++){
            printf("Enter a number:\n");
            scanf("%i",&arr[x][y]);
        }
    }

}