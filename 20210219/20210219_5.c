/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/

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
void drawRectangle(struct Point p1,struct Point p2);
struct Point createPoint(int x, int y);




int main(void){
    char chosen;
    printf("Enter the element to print the grid:\n");
    scanf("%c",&chosen);
    fillArr(arr,chosen);
    printArr(arr);
    int x1,x2,y1,y2;
    printf("Choose x and y for the first point\n");
    scanf("%i %i",&x1,&y1);
    printf("Choose x and y for the second point\n");
    scanf("%i %i",&x2,&y2);
    struct Point point1 = {x1,y1};
    struct Point point2 = {x2,y2};
    drawRectangle(point1,point2);
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

void drawRectangle(struct Point p1,struct Point p2){
    int maxX,minX,maxY,minY;
    char elToFillWith = '@';
    if (p1.x <= p2.x){
        minX = p1.x;
        maxX = p2.x;
    }else{
        minX = p2.x;
        maxX = p1.x;
    }
    if (p1.y <= p2.y){
        minY = p1.y;
        maxY = p2.y;
    }else{
        minY = p2.y;
        maxY = p1.y;
    }
    printf("minX = %i, maxX = %i, minY = %i,maxY = %i\n",minX,maxX,minY,maxY);
        
    

    for (minX; minX <= maxX;minX++){
        int start = minY;
        for(start; start <= maxY; start++){
            arr[minX][start] = elToFillWith;
        }
    }  
}

struct Point createPoint(int x, int y){
    
}