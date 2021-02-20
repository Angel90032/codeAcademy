/*Задача 3. /* parameter by pointer / reference to the value */

#include <stdio.h>
#include <string.h>

struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

void printPtrPaper( struct tagPaper* pPaper ) {
    printf( "Paper id : %d\n", pPaper -> m_nBookId);
    printf( "Paper title : %s\n", pPaper ->m_szTitle);
    printf( "Paper author : %s\n", pPaper ->m_szAuthor);
    printf( "Paper subject : %s\n", pPaper ->m_szSubject);
}


int main( ) {
    struct tagPaper myPaper = { 123456, "Paper title", "Autor", "paper subject" };
    printf("\n");
    printPtrPaper(&myPaper);
    return 0;
}
