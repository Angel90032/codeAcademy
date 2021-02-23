#include <stdio.h>


union tagUTest{
    int m_iNum;
    float m_fRate;
    union tagUTest *puniNext;
};

int main(void){
    printf("The size is %d",sizeof(union tagUTest));
    union tagUTest uniVar = {0};
    union tagUTest *puniVal = &uniVar;
    printf("The size of the var is %d",sizeof(uniVar));

    uniVar.m_iNum = 13;
    puniVal->m_fRate = 6.78;
    
    return 0;
}



