/*Задача 12.
Напишете програма, която използва битови полета. Битовите полета да*/

/* Извод 1: Ако не пакетираме, подребната на елементите не променя sizeof на проментиливата. ?*/
/* Извод 2: Не мога да видя връзката между битови полета и sizeof*/

/*Ако не пакетираме и използваме битови полета sizeof na 4-те структури е по 8, ако пакетираме е съответно 5 5 6 6*/
/* Без битови и с пакетиране sizeof е 5 5 10 10,което e ясно как се получава*/
/* Без битови и без пакетиране sizeof е 8 8 12 12,което също е очаквано поведение (било то и неопределено)*/




#include <stdio.h>
#pragma pack(1)




struct myStruct1 {
    char a;
    unsigned int x;
}someStruct1;

struct myStruct2 {
    unsigned int x;
    char a;
    
}someStruct2;

struct Struct3 {
    char a;
    char b;
    unsigned int x;
    unsigned int y;
}someStruct3;

struct Struct4 {
    unsigned int x;
    unsigned int y;
    char a;
    char b;

}someStruct4;


int main(void){
    someStruct1.a = '+';
    someStruct1.x = 1;
    printf("Size of someStruct1 = %i\n",sizeof(someStruct1));

    someStruct2.x = 2;
    someStruct2.a = '!';
    printf("Size of someStruct2 = %i\n",sizeof(someStruct2));

    someStruct3.a = '+';
    someStruct3.b = '-';
    someStruct3.x = 3;
    someStruct3.y = 4;
    
    printf("Size of someStruct3 = %i\n",sizeof(someStruct3));

    someStruct4.a = '-';
    someStruct4.b = '+';
    someStruct4.x = 5;
    someStruct4.y = 6;
    printf("Size of someStruct4 = %i\n",sizeof(someStruct4));
    
    return 0;
}
