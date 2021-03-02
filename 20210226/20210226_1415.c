/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)


struct someRunners{
    int Rnumber;
    char *RfirstName;
    char *RlastName;
    int R_age;
};

typedef struct someRunners runners;

void enterRunners(runners *ptr,int someCount);
void sortRunnersByname(runners *ptr, int someCount);
void printRunners(runners *ptr, int someCount);

int count = 0;

int main(void){
    runners *runnersArr = NULL;
    
    printf("Enter the number of participants:\n");
    scanf("%i",&count);
    runnersArr = (runners*)malloc(count * sizeof(runners));
    if (runnersArr == NULL){
        printf("Error. Memory allocation for arr failed.\n");
        
    }else{
        printf("Memory allocation for arr was successful.\n");
    }

    enterRunners(runnersArr,count);
    sortRunnersByname(runnersArr, count);
    printRunners(runnersArr, count);
    

  
    free(runnersArr);
    
    return 0;
}

void enterRunners(runners *ptr,int someCount){
        for (int i = 0; i < someCount;i++){
            int number,age,sizeFname,sizeLname;
            printf("Enter number age sizeFname sizeLname.\n");
            scanf("%i %i %i %i",&number,&age,&sizeFname,&sizeLname);
            ptr[i].RfirstName = (char*)malloc(sizeFname);
            if (ptr[i].RfirstName == NULL){
                printf("Error. Memory allocation for arr failed.\n");
                
            }else{
                printf("Memory allocation for arr was successful.\n");
            }
            ptr[i].RlastName = (char*)malloc(sizeLname);
            if (ptr[i].RfirstName == NULL){
                printf("Error. Memory allocation for arr failed.\n");
                
            }else{
                printf("Memory allocation for arr was successful.\n");
            }
        
            printf("Enter F name\n");
            fgets(ptr[i].RfirstName, sizeFname, stdin);
        
            printf("Enter L name\n");
            fgets(ptr[i].RlastName, sizeLname, stdin);

            ptr[i].R_age = age;
            ptr[i].Rnumber = number;
    }
}
void sortRunnersByname(runners *ptr, int someCount){
    for (int i = 1; i < someCount; i++)
        for (int j = 0; j < someCount - i; j++) {
            if (strcmp(ptr[j].RlastName, ptr[j+1].RlastName) > 0) {
                runners temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
                }

            }
}

void printRunners(runners *ptr, int someCount){
    for (int x = 0; x < someCount; x++){
        printf("The %i runners details are: number: %i, age: %i, fname = %s, lname = %s",
        x,ptr[x].Rnumber,ptr[x].R_age,ptr[x].RfirstName,ptr[x].RlastName);
    }
}
