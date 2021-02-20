/*Задача 3. Указатели към структура, предаване на структура на функция по
стойност и по референция*/


#include <stdio.h>
#include <string.h>
struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
void printPaper( struct tagPaper somePaper ) { /* by value */
printf( "Paper id : %d\n", somePaper.m_nBookId);
printf( "Paper title : %s\n", somePaper.m_szTitle);
printf( "Paper author : %s\n", somePaper.m_szAuthor);
printf( "Paper subject : %s\n", somePaper.m_szSubject);
}

int main(void){
    struct tagPaper myBook1 = {10,"The world of Pesho","Pesho","Pain and regret"};
    printPaper(myBook1);
    struct tagPaper myBook2 = {11,"Life of Pesho","Pesho Peshov","Constant party"};
    printPaper(myBook2);
    return 0;
}