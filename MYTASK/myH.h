#ifndef MYHEADER
#define MYHEADER

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

#define PRINT_FORMAT 

#define SEPERATOR "---------------------------------------------\n"




typedef struct defekt{
    int number;
    char *preview;
    char *description;
    unsigned int dateOpened;
    unsigned int dateFixed;
    unsigned int dateClosed;
    char *testerName;
    char *programmerName;
    char *status;
    
}defekt_t;

typedef struct Node{
    defekt_t information;
    struct Node *ptr;
}Node_t;
/*!*/

void createDefect();
int printLL();
void changeStatus();
void menu();
int writeCSV();
void readCSV();
void FixLeBug1();
int FixLeBug2();

#endif

