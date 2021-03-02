/*Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#pragma pack(1)

static const int  MIN_D_1 = 15.0;
static const int  MAX_D_1 = 140.0;
static const double  MIN_RIND_1 = 0.5;
static const double  MAX_RIND_1 = 3.5;

static const int  MIN_D_2 = 35.0;
static const int  MAX_D_2 = 95.0;
static const double  MIN_RIND_2 = 0.3;
static const double  MAX_RIND_2  = 0.9;

double avDminusRind1 = 0;
double avDminusRind2 = 0;

double totalD1 = 0;
double totalRind1 = 0;
double AVGDMinusRind1 = 0;

double totalD2 = 0;
double totalRind2 = 0;
double AVGDMinusRind2 = 0;

struct WaterMelon{
    double MellonDiameter;
    double rindSize;
};
typedef struct WaterMelon WM;

void populateTheArr1(WM *ptr, int someCount);
void populateTheArr2(WM *ptr, int someCount);

void calculateAVG1(WM *ptr, int someCount);
void calculateAVG2(WM *ptr, int someCount);

void finalCalculation(double x, double y);



int main(void){
    int count1,count2;
    printf("Enter the WM count for size1 and size2:\n");
    scanf("%i %i",&count1,&count2);
    printf("Count1 = %i, count2 = %i\n",count1,count2);

    WM *Arr1 = NULL;
    WM *Arr2 = NULL;
    Arr1 = (WM*)malloc(count1 * sizeof(WM));
    if (Arr1 == NULL){
        printf("Error. Memory allocation for Arr1 failed.\n");
        return 1;
    }else{
        printf("Memory allocation for Arr1 was successful.\n");
    }

    Arr2 = (WM*)malloc(count2* sizeof(WM));
    if (Arr2 == NULL){
        printf("Error. Memory allocation for Arr2 failed.\n");
        return 1;
    }else{
        printf("Memory allocation for Arr2 was successful.\n");
    }

    populateTheArr1(Arr1, count1);
    populateTheArr2(Arr2,count2);
    calculateAVG1(Arr1,count1);
    calculateAVG2(Arr2,count2);

   finalCalculation(AVGDMinusRind1, AVGDMinusRind2);

    free(Arr1);
    free(Arr2);
    
    return 0;
}

void populateTheArr1(WM *ptr,int someCount){
    srand(time(0));
    for (int i = 0; i < someCount; i++){
        //srand(time(0));
        ptr[i].MellonDiameter = (double)(rand() %(MAX_D_1 - MIN_D_1 + 1)) + MIN_D_1;
        //srand(time(0));
        double scale1 = rand() / (double) RAND_MAX; /* [0, 1.0] */
        ptr[i].rindSize = MIN_RIND_1 + scale1 * ( MAX_RIND_1 - MIN_RIND_1 );
        
    }
}

void populateTheArr2(WM *ptr, int someCount) {
        for (int x = 0; x < someCount; x++){
        //srand(time(0));
        ptr[x].MellonDiameter = (double)(rand() %(MAX_D_2 - MIN_D_2 + 1)) + MIN_D_2;
        //srand(time(0));
        double scale2 = rand() / (double) RAND_MAX; /* [0, 1.0] */
        ptr[x].rindSize = MIN_RIND_2 + scale2 * ( MAX_RIND_2 - MIN_RIND_2 );
    }
}
void calculateAVG1(WM *ptr, int someCount){
        for (int i = 0; i < someCount; i++){
        totalD1 += ptr[i].MellonDiameter;
        totalRind1 += ptr[i].rindSize;

        AVGDMinusRind1 = (totalD1 - totalRind1) / someCount;
        printf("The type 1 mellon number %i is with D %lf and rind %lf \n",i,ptr[i].MellonDiameter,ptr[i].rindSize);
    }
    
}

void calculateAVG2(WM *ptr, int someCount){
        for (int x = 0; x < someCount; x++){
        totalD2 += ptr[x].MellonDiameter;
        totalRind2 += ptr[x].rindSize;

        AVGDMinusRind2 = (totalD2 - totalRind2) / someCount;
        printf("The type 2 mellon number %i is with D %lf and rind %lf \n",x,ptr[x].MellonDiameter,ptr[x].rindSize);
    }

}

void finalCalculation(double x, double y){
    if (x > y){
        printf("WM type 1 has more pink flesh than type 2. %lf > %lf\n",x,y);

    }else if (x < y){
        printf("WM type 2 has more pink flesh than type 2. %lf > %lf\n",y,x);
    }else{
        printf("What are the odds of that really ?\n");
    }
}