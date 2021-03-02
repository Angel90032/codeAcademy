/**Задача 12.
Напишете макро GENERIC_MAX(type),което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/

#include <stdio.h>

int int_max(int x, int y,int maxInt);
float float_max(float x, float y,float maxFloat);
char char_max(char x, char y,char maxChar);


#define GENERIC_MAX(type,x,y,Mmax)\
if (type == "int"){\
    Mmax = x > y ? x : y;\
}else if (type == "float"){\
    Mmax = x > y ? x : y;\
}else if (type == "char"){\
    Mmax = x > y ? x : y;\
}

int maxInt;
float maxFloat;
char maxChar;

int main(void){
    int x = 10;
    int y = 20;
    
    GENERIC_MAX("int",x,y,maxInt);

    float z = 500.50;
    float q = 400.50;
    
    GENERIC_MAX("float",z,q,maxFloat);

    char a = 'A';
    char b = 'B';
    
    GENERIC_MAX("char",a,b,maxChar);

    printf("The max int is %i\n",maxInt);
    printf("The max float is %f\n",maxFloat);
    printf("The max char is %c\n",maxChar);
    return 0;
}


int int_max(int x, int y,int maxInt){
    
    maxInt = (x > y ? x : y);
}

float float_max(float x, float y,float maxFloat){

    maxFloat =  (x > y ? x : y);
}

char char_max(char x, char y,char maxChar){
    
    maxChar = (x > y ? x : y);
}
