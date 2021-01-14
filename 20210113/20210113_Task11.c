#include <stdio.h>

int main(void){
    float fTomatoPricePerKilo = 4.50;
    float fFlourPricePerKilo = 1.80;
    float fYogurtPrice = 0.50;
    float fIcecreamPrice = 0.80;
    float fCandyPricePerKilo = 1.50;
    float fLollipopPrice = 0.15;
    float fTomatoTotal;
    float fTomatoWeight;

    printf("Hello. What would you like to buy today\n");
    printf("Tomatoes? A wonderful choice. How many kilograms would you like ? ");
    scanf("%f",&fTomatoWeight);
    fTomatoTotal = fTomatoWeight*fTomatoPricePerKilo;
    printf("%.2f",fTomatoTotal);



}