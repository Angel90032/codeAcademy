/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma separated_values ). Пример:
prog1 > structs20.cvs*/

#include <conio.h> 
#include <stdio.h> 
#include <string.h>

enum Type{
VAL0 = 100,
VAL1 = 200,
VAL3 = 300,
VALN = 400
};

struct someStruct {
    int x;
    char str[10];
    double d;
    enum Type q;

}myStruct;




int main(void){
    struct someStruct arrOfStruct[20] = {
        {10,"ABC",3.14,100},{11,"ABC",3.24,100},{12,"ABC",3.34,100},{13,"ABC",3.44,100},{14,"ABC",3.54,100},
        {15,"ABC",3.64,100},{16,"ABC",3.74,100},{17,"ABC",3.8,300},{18,"ABC",3.9,100},{19,"ABC",3.3,200},
        {21,"ABC",3.4,400},{22,"ABC",3.54,100},{23,"ABC",3.54,100},{24,"ABC",3.542,100},{25,"ABC",3.234,100},
        {26,"ABC",3.546,100},{27,"ABC",3.6543,100},{28,"ABC",3.5646,300},{29,"ABC",3.2342,200},{30,"ABC",3.4343,100}

    };
    FILE* fp = fopen("omg.csv", "a+");

    if (!fp) { 
        /* Error in file opening */
        printf("Can't open file\n"); 
        return 0; 
    }
    int index;

    for (index = 0; index < 20; index++){
        fprintf(fp,"%i, %s, %f %d",arrOfStruct[index].x,arrOfStruct[index].str,arrOfStruct[index].d,arrOfStruct[index].q);
    }
    
    return 0;
}


