#include "myH.h"




extern int bugCounter;
extern Node_t *head;
extern Node_t *pToMove;
extern Node_t *newPtoPrint;


void createDefect(){
    
    
    Node_t *temp = (Node_t*)malloc(sizeof(Node_t));
    if (!temp){
        printf("Error while memory allocating for start!\n");
    }
    temp->information.number = bugCounter;
    bugCounter += 1;
    char sizePreview[10];
    char sizeDescription[10];
    char sizeOpenDate[100];
    char sizeTester[10];
    char sizeProgrammer[10];

    
    printf("Enter char size of preview:\n");
    fgets(sizePreview,10,stdin);
    fflush(stdin);
    int iSizePreview = atoi(sizePreview);
    /*printf("Size is %i\n",iSizePreview);*/
    temp->information.preview = (char*)malloc(iSizePreview* sizeof(char));
    if (temp->information.preview == NULL){
        printf("Error while memory allocating\n"); 
    }
    fgets(temp->information.preview,iSizePreview,stdin);
    fflush(stdin);
    
    

    printf("Enter chr size of the description\n");
    fgets(sizeDescription,10,stdin);
    fflush(stdin);
    int iSizeDescription = atoi(sizeDescription);
    temp->information.description = (char*)malloc(iSizeDescription * sizeof(char));
    if (temp->information.description == NULL){
        printf("Error while memory allocating\n");
    }
    fgets(temp->information.description,iSizeDescription,stdin);
    fflush(stdin);
    

    printf("Enter date of opening the bug:\n");
    fgets(sizeOpenDate,100,stdin);
    fflush(stdin);
    temp->information.dateOpened = atoi(sizeOpenDate);
    temp->information.dateFixed = 0;
    temp->information.dateClosed = 0;

    printf("Enter chr size for the name of the tester:\n");
    fgets(sizeTester,10,stdin);
    fflush(stdin);
    int iSizeTester = atoi(sizeTester);
    temp->information.testerName = (char*)malloc(iSizeTester * sizeof(char));
    if (temp->information.testerName == NULL){
        printf("Error while memory allocating\n");
    }
    fgets(temp->information.testerName,iSizeTester,stdin);
    fflush(stdin);
    

    printf("Enter chr size for the name of the programmer:\n");
    fgets(sizeProgrammer,10,stdin);
    fflush(stdin);
    int iSizeProgrammer = atoi(sizeProgrammer);
    temp->information.programmerName = (char*)malloc(iSizeProgrammer * sizeof(char));
    if (temp->information.programmerName == NULL){
        printf("Error while memory allocating\n");
    }
    fgets(temp->information.programmerName,iSizeProgrammer,stdin);
    fflush(stdin);
    
    
    temp->information.status = (char*)malloc(10*sizeof(char));
    strcpy(temp->information.status,"new");

    temp->ptr = head;
    head = temp;
    printf("BUG added successfully!\n");

}

int printLL(){
    printf("PRINTING THE LIST\n");
    if (NULL == head){
        printf("Your list is empty.\n");
        printf(SEPERATOR);
        return 0;
        
    }
    Node_t *tempToPrint = head;
    //pToMove = head;
    
    while (tempToPrint){ /*!!!*/
        printf("Number = %d\nPreview = %s\nDescription = %s\nD-open = %i\nD-fixed = %i\nD-closed = %i\nTester name = %s\nProgrammer name = %s\nStatus = %s\n",\
    tempToPrint->information.number,tempToPrint->information.preview,tempToPrint->information.description,\
    tempToPrint->information.dateOpened,tempToPrint->information.dateFixed,tempToPrint->information.dateClosed,\
    tempToPrint->information.testerName,tempToPrint->information.programmerName,tempToPrint->information.status);
        printf(SEPERATOR);
        tempToPrint = tempToPrint->ptr;
        /*pToMove = pToMove->ptr;*/
    }

    
    /*printf(PRINT_FORMAT);*/
    //head = pToMove;
    return 0;
    

    

}

void changeStatus(){
    int n,reply,dFix,dClosed;
    printf("Enter the number of the defect which you want to change:\n");
    char arrN[10];
    fgets(arrN,10,stdin);
    n = atoi(arrN);
    Node_t *pToMove = head;
    while((pToMove->information.number != n) && (pToMove->ptr)){
        pToMove = pToMove->ptr;
    }
    if (pToMove->information.number == n){
        QUESTION: printf("Enter 1 to mark the bug as fixed, enter 2 to mark is as closed\n");
        char arrReply[10];
        fgets(arrReply,10,stdin);
        reply = atoi(arrReply);
        if(reply == 1){
            strcpy(pToMove->information.status, "fixed");
            printf("%s\n",pToMove->information.status);
            printf("Enter the date of fixing the bug:\n");
            char arrdFix[20];
            fgets(arrdFix,20,stdin);
            dFix = atoi(arrdFix);
            pToMove->information.dateFixed = dFix;
        }else if(reply == 2){
            strcpy(pToMove->information.status, "closed");
            printf("%s\n",pToMove->information.status);
            printf("Enter the date of closing the bug:\n");
            char arrDclosed[20];
            fgets(arrDclosed,20,stdin);
            dClosed = atoi(arrDclosed);
            pToMove->information.dateClosed = dClosed;
        }else{
            printf("Invlid choice.\n");
            goto QUESTION;
        }
        

    }else{
        printf("Defect with such number does not exist\n");
    }
}


void menu(){
    printf(SEPERATOR);
    
    
    printf("To create a new defect press 1\nTo print the currect defects press 2\nTo change the status of a bug press 3 \
    \nTo write to CSV press 4\nTo read CSV press 5\nTo exit press 9\n");
    char choiceArr[5];
    fgets(choiceArr,5,stdin);
    int choice = atoi(choiceArr);
    switch (choice)
    {
    case (1):
        createDefect();
        menu();
        break;
    
    case (2):
        printLL();
        menu();
        break;

    case (3):
        changeStatus();
        menu();
        break;
    
    case (4):
        writeCSV();
        menu();
        break;

    case (5):
        readCSV();
        menu();
        break;
    case (9):
        printf("Bye bye.\n");
        deinit();
        break;
    default:
        printf("INVLID ENTRY:\n");
        menu();
        break;
    }


}

int writeCSV(){
    /*char c;*/
    Node_t *moverP = head;
    FILE *fpCSV = NULL;
    FILE *fpText = NULL;
    fpCSV = fopen("mycsv.csv","w");
    fpText = fopen("MYTEXT.TXT","w");

    if (NULL == fpCSV){
        printf("Cant open the CSV file\n");
        return 1;
    }
    if (NULL == fpText){
        printf("Cant open the TXT file\n");
        return 1;
    }

    while(moverP){
        
        fprintf(fpText,"%i,%s,%s,%i,%i,%i,%s,%s,%s\n",moverP->information.number,
        moverP->information.preview,moverP->information.description,
        moverP->information.dateOpened,moverP->information.dateFixed,
        moverP->information.dateClosed,
        moverP->information.testerName,
        moverP->information.programmerName,moverP->information.status);
        fprintf(fpText,"@");

        moverP = moverP->ptr;
        }

    
    fclose(fpCSV);
    fclose(fpText);
    FixLeBug1();
    return 0;
}


void FixLeBug1(){
    FILE *fp = fopen("MYTEXT.TXT","r");
    FILE *fpToFix = fopen("MYFIXEDTEXT.TXT","a");
    char c;
    c = getc(fp);
    while(c != EOF){
        if (c == '\n'){
            c = getc(fp);
            continue;
        }
        if (c == '@'){
            fprintf(fpToFix,"\n");
            c = getc(fp);
            continue;
        }
        fprintf(fpToFix,"%c",c);
        c = getc(fp);
    }
    fprintf(fpToFix,"\n");
    fclose(fp);
    fclose(fpToFix);
    FixLeBug2();
}

int FixLeBug2(){
    FILE *fpToRead = fopen("MYFIXEDTEXT.TXT","r");
    FILE *fpToWriteCSV = fopen("mycsv.csv","a");
    char c;
    c = getc(fpToRead);
    while(c != EOF){
        if (c == ','){
            fprintf(fpToWriteCSV,";");
            c = getc(fpToRead);
            continue;
        }
        fprintf(fpToWriteCSV,"%c",c);
        c = getc(fpToRead);
    }
    fclose(fpToWriteCSV);
    fclose(fpToRead);
    return 0;
}



void readCSV(){
    
    int col;
    
    
    char buffer[1000];
    FILE *fpread = NULL;
    fpread = fopen("readfromhere.csv","r");
    if (fpread == NULL){
        printf("Could not open the file\n");
    }else{
        printf("File openned successfully!\n");
    }
    

    while(fgets(buffer,1000,fpread)!= NULL){
        bugCounter += 1;
        printf(SEPERATOR);
        col = 0;
        Node_t *newPtoPrint = (Node_t*)malloc(sizeof(Node_t));
        if (!newPtoPrint){
            printf("Nasty error.\n");
        }

        
        char *piece = strtok(buffer,";");

        while(piece != NULL){
            
            /*printf("Piece = %s\n",piece);
            printf("Col = %i\n",col);*/
            switch (col){
            case (0):
                newPtoPrint->information.number = atoi(piece);
                printf("Number is %i\n",newPtoPrint->information.number);
                break;
            case (1):
                newPtoPrint->information.preview = (char *)malloc((sizeof(strlen(piece)+1)*sizeof(char)));
                if (newPtoPrint->information.preview == NULL){
                    printf("Errow while memory allocation for the preview\n");
                }
                strcpy(newPtoPrint->information.preview,piece);
                printf("The preview is %s\n",newPtoPrint->information.preview);
                break;
            
            case (2): /*description*/
                newPtoPrint->information.description = (char *)malloc((sizeof(strlen(piece)+1)*sizeof(char)));
                if (newPtoPrint->information.description == NULL){
                    printf("Errow while memory allocation for the description\n");
                }
                strcpy(newPtoPrint->information.description,piece);
                printf("The description is %s\n",newPtoPrint->information.description);
                break;
            case (3):
                newPtoPrint->information.dateOpened = atoi(piece);
                printf("DATE of opening %i\n",newPtoPrint->information.dateOpened);
                break;
            case (4):
                newPtoPrint->information.dateFixed = atoi(piece);
                printf("DATE of fixing %i\n",newPtoPrint->information.dateFixed);
                break;
            case (5):
                newPtoPrint->information.dateClosed = atoi(piece);
                printf("DATE of closing %i\n",newPtoPrint->information.dateClosed);
                break;
            
            case (6):/*T-name*/
                /*printf("Hello. I am column 6 and I will break your code.\n");*/
                newPtoPrint->information.testerName = (char *)malloc(((sizeof(strlen(piece)+100))*sizeof(char)));
                
                if (newPtoPrint->information.testerName == NULL){
                    printf("Errow while memory allocation for the T-name\n");
                }else{
                    printf("Memory allocated successfully\n");
                }
                
                strcpy(newPtoPrint->information.testerName,piece);
                
                printf("The TesterNme is %s\n",newPtoPrint->information.testerName);
                break;
                    
            case (7):/*P-name*/
                newPtoPrint->information.programmerName = (char*)malloc(((sizeof(strlen(piece)+1))*sizeof(char)));
                if (newPtoPrint->information.programmerName == NULL){
                    printf("Errow while memory allocation for the P-name\n");
                }
                strcpy(newPtoPrint->information.programmerName,piece);
                printf("The progrmmerNme is %s\n",newPtoPrint->information.programmerName);
                break;

            case (8): /*status*/
                newPtoPrint->information.status = (char *)malloc(((sizeof(strlen(piece)+1))*sizeof(char)));
                if (newPtoPrint->information.status == NULL){
                    printf("Errow while memory allocation for the status\n");
                }
                strcpy(newPtoPrint->information.status,piece);
                printf("The status is %s\n",newPtoPrint->information.status);
                break;
            }
            
            piece = strtok(NULL,";");
            col += 1;
            

        }
        newPtoPrint->ptr = head;
        head = newPtoPrint;
        

    }
    /*printf("%d\n",head->information.number);
    printf("%d\n",&head);
    printf("%d\n",head->ptr);
    printf("%d\n",newPtoPrint);*/
    
}

void deinit(){
    Node_t *tmp;
    while(head){
        tmp = head;
        free(tmp->information.preview);
        tmp->information.preview = NULL;
        free(tmp->information.description);
        tmp->information.description = NULL;
        free(tmp->information.testerName);
        tmp->information.testerName = NULL;
        free(tmp->information.programmerName);
        tmp->information.programmerName = NULL;
        free(tmp->information.status);
        tmp->information.status = NULL;
        head = head->ptr;
        //printf("Freeedom\n");
    }
    
    Node_t *pToMove = NULL;
    Node_t *pToPrint = NULL;
}