/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.*/

/* Не разбирам как може да създаваме променливи с различни имена чрез функция*/

#include <stdio.h>

struct Employee {
    int number;
    char firstName[50];
    char lastName[50];
    int workExperience;
    int salary;
    struct Employee *pToBoss;
};  

int main(void){
    /*struct Employee e1,e2,e3,e4,e5,e6,e7,e8,e9,e10;*/
    struct Employee e1 = {10,"Pesho10","Peshov10",10, 10000,NULL};
    struct Employee e2 = {20,"Pesho20","Peshov20",20, 20000,NULL};
    struct Employee e3 = {30,"Pesho30","Peshov30",30, 30000,NULL};
    struct Employee e4 = {40,"Pesho40","Peshov40",40, 40000,NULL};
    struct Employee e5 = {50,"Pesho50","Peshov50",50, 50000,NULL};
    struct Employee e6 = {60,"Pesho60","Peshov60",60, 60000,NULL};
    struct Employee e7 = {70,"Pesho70","Peshov70",70, 70000,NULL};
    struct Employee e8 = {80,"Pesho80","Peshov80",80, 80000,NULL};
    struct Employee e9 = {90,"Pesho90","Peshov90",90, 90000,NULL};
    struct Employee e10 = {100,"Pesho100","Peshov100",100, 100000,NULL};

    struct Employee * pTo1 = &e2;
    struct Employee * pTo2 = &e3;
    struct Employee * pTo3 = &e4;
    struct Employee * pTo4 = &e5;
    struct Employee * pTo5 = &e6;
    struct Employee * pTo6 = &e7;
    struct Employee * pTo7 = &e8;
    struct Employee * pTo8 = &e9;
    struct Employee * pTo9 = &e10;
    struct Employee * pTo10 = &e1;

    /*printf("%i, %s, %s,%i,%i,The name of the boss is %s\n",e8.number,e8.firstName,e8.lastName,e8.workExperience,e8.salary,pTo1->firstName);*/

    struct Employee arr[10] = {e1,e2,e3,e4,e5,e6,e7,e8,e9,e10};
    int i;

    for (i = 0; i<10;i++){
        printf("ID %i fName %s lName %s WE %i Salary %i\n",
        arr[i].number,arr[i].firstName,arr[i].lastName,arr[i].workExperience,arr[i].salary);
    }

}