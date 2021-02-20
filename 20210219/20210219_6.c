/*Задача 6. Направете по подобен начин триъгълник:*/


/*
- - - - - - * - - - - - - - -
- - - - - - - - - * - - - - -
- - - - - - - - * - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - -
- - - - - - - - - - - - - - - */

/* Ako * sa 3te tochki, ne znam kak bi se zapylnil triygylnika obrazuvan ot tezi 3 tochki. */


#include <stdio.h>

#define ROWS 15
#define COLUMNS 15

char arr[ROWS][COLUMNS];

struct Point{
    int x;
    int y;
};

void fillArr(char arr[ROWS][COLUMNS],char elToFillWith);
void printArr(char arr[ROWS][COLUMNS]);
void drawTriangle(struct Point p1,struct Point p2,struct Point p3);




int main(void){
    char chosen;
    printf("Enter the element to print the grid:\n");
    scanf("%c",&chosen);
    fillArr(arr,chosen);
    printArr(arr);
    int x1,x2,y1,y2,x3,y3;
    printf("Choose x and y for the first point\n");
    scanf("%i %i",&x1,&y1);
    printf("Choose x and y for the second point\n");
    scanf("%i %i",&x2,&y2);
    printf("Choose x and y for the third point\n");
    scanf("%i %i",&x3,&y3);
    struct Point point1 = {x1,y1};
    struct Point point2 = {x2,y2};
    struct Point point3 = {x3,y3};
    drawRectangle(point1,point2,point3);
    printArr(arr);
    
    
}
    



void fillArr(char arr[ROWS][COLUMNS],char elToFillWith){
    int x,y;
    for ( x = 0; x <= 14;x++){
        for (y = 0; y <= 14;y++){
            arr[x][y] = elToFillWith;
        }
    }
}
void printArr(char arr[ROWS][COLUMNS]){
    int x,y;
    for ( x = 0; x <= 14;x++){
        printf("\n");
        for (y = 0; y <= 14;y++){
            printf("%c ",arr[x][y]);
        }
    }
    printf("\n");

}
