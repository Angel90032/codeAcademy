#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)


unsigned short bugCounter = 0;


typedef struct defekt{
    unsigned short number;
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

void createDefect();

Node_t *start;


int main(void){
    start = NULL;
    createDefect();
    return 0;
}



void createDefect(){
    /*Node_t *someP = start;*/
    printf("---------\n");
    start->information.number = bugCounter;
    printf("---------\n");
    printf("%d\n",start->information.number);
    bugCounter += 1;
    char sizePreview[10];
    char sizeDescription[10];
    char sizeOpenDate[10];
    /*char sizeFixDate[100];
    char sizeCloseDate[100];*/
    char sizeTester[10];
    char sizeProgrammer[10];
    /*char sizeStatus[100];*/
    
    printf("Enter char size of preview:\n");
    fgets(sizePreview,500,stdin);
    int iSizePreview = atoi(sizePreview);
    printf("Size is %i\n",iSizePreview);
    start->information.preview = (char*)malloc(iSizePreview* sizeof(char));
    if (start->information.preview == NULL){
        printf("Error while memory allocating\n"); 
    }
    fgets(start->information.preview,iSizePreview,stdin);
    /*printf("%s",myBug.preview);*/

    printf("Enter chr size of the description\n");
    fgets(sizeDescription,500,stdin);
    int iSizeDescription = atoi(sizeDescription);
    start->information.description = (char*)malloc(iSizeDescription * sizeof(char));
    if (start->information.description == NULL){
        printf("Error while memory allocating\n");
    }
    fgets(start->information.description,iSizeDescription,stdin);

    printf("Enter date of opening the bug:\n");
    fgets(sizeOpenDate,10,stdin);
    start->information.dateOpened = atoi(sizeOpenDate);
    start->information.dateFixed = 0;
    start->information.dateClosed = 0;

    printf("Enter chr size for the name of the tester:\n");
    fgets(sizeTester,100,stdin);
    int iSizeTester = atoi(sizeTester);
    start->information.testerName = (char*)malloc(iSizeTester * sizeof(char));
        if (start->information.testerName == NULL){
        printf("Error while memory allocating\n");
    }
    fgets(start->information.testerName,iSizeTester,stdin);

    printf("Enter chr size for the name of the programmer:\n");
    fgets(sizeProgrammer,100,stdin);
    int iSizeProgrammer = atoi(sizeProgrammer);
    start->information.programmerName = (char*)malloc(iSizeProgrammer * sizeof(char));
        if (start->information.programmerName == NULL){
        printf("Error while memory allocating\n");
    }
    fgets(start->information.programmerName,iSizeProgrammer,stdin);

    start->information.status = (char*)malloc(10*sizeof(char));
    strcpy(start->information.status,"new");

    if (bugCounter == 1){
        start->ptr = NULL;
    }

    printf("\nNumber = %i\nPreview = %s\nDescription = %s\nD-Open = %i\nD-fixed = %i\nD-closed = %i\nTester = %s\nProgrammer = %s\nStatus = %s\nPTR value = %p",
    start->information.number,start->information.preview,start->information.description,start->information.dateOpened,start->information.dateFixed,start->information.dateClosed,start->information.testerName,start->information.programmerName,start->information.status,start->ptr);

    
}


