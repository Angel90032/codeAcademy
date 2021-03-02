/*Задача 12.
Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

#define COUNT 10

 struct oldEmpl {
    int number;
    char *firstName;
    char *middleName;
    char *lastName;
    int workExperience;
    int salary;
    struct oldEmpl *pToBoss;
};
typedef struct oldEmpl t_mEmployee;

void createEmployee(){

}



int main(void){
    t_mEmployee A,B,C,D,E,F,G,H,I,K;
    t_mEmployee eArr[] = {A,B,C,D,E,F,G,H,I,K};
    
    

    for (int i = 0; i < COUNT;i++){
        int number,workExp;
        float salary;
        int sizeFname, sizeMname ,sizeLname;
        char *fName,*mName,*lName;
        printf("Enter Employee number WE and salary:\n");
        scanf("%i %i %f",&number,&workExp,&salary);

        printf("Enter the char size for the first,middle and last name:\n");
        scanf("%i %i %i",&sizeFname,&sizeMname,&sizeLname);
        fName = (char*)malloc(sizeFname *sizeof(char));
        
        if (fName == NULL ){
            printf("Error when allocating the memory for fName.\n");
            return 1;
        }else{
            printf("Success ! Memory for fName is indeed allocated.\n");
        }
        mName = (char*)malloc(sizeMname *sizeof(char));
        
        if (mName == NULL ){
            printf("Error when allocating the memory for mName.\n");
            return 1;
        }else{
            printf("Success ! Memory for mName is indeed allocated.\n");
        }
        lName = (char*)malloc(sizeLname * sizeof(char));
        
        if (lName == NULL ){
            printf("Error when allocating the memory for lName.\n");
            return 1;
        }else{
            printf("Success ! Memory for lName is indeed allocated.\n");
        }
        eArr[i].firstName = (char*)malloc(sizeFname *sizeof(char));
        eArr[i].middleName = (char*)malloc(sizeMname *sizeof(char));
        eArr[i].lastName = (char*)malloc(sizeLname * sizeof(char));

        printf("sizeFname = %i; sizeMname = %i ; sizeLname = %i\n",sizeFname,sizeMname,sizeLname);

        printf("Enter the first name\n");
        
        fgets(fName, sizeFname, stdin);
        strcpy(eArr[i].firstName,fName);

        printf("Enter the middle name\n");
        
        fgets(fName, sizeMname, stdin);
        strcpy(eArr[i].middleName,fName);

        printf("Enter the last name\n");
        fgets(lName, sizeLname, stdin);
        strcpy(eArr[i].lastName,lName); 

        
        
                  
        eArr[i].number = number;
        eArr[i].workExperience = workExp;
        eArr[i].salary = salary;
        eArr[i].pToBoss = NULL;
            

        free(fName);
        free(mName);    
        free(lName);
    }
    /*the boss of empl x is x+1*/
    for (int x = 0; x < COUNT; x++){
        if (x == COUNT - 1){
            eArr[x].pToBoss = &eArr[0];
        }else{
            eArr[x].pToBoss = &eArr[x+1];
        }
        
    
    }
    
    /*printing result*/
    for (int i = 0; i < COUNT;i++){
    printf("ID number is %i Fname is %s Mname is %s Lname is %s WE is %i Salary is %i BOSS is is %s\n",
    eArr[i].number,eArr[i].firstName,eArr[i].middleName,eArr[i].lastName,eArr[i].workExperience,eArr[i].salary,eArr[i].pToBoss->lastName);
    }
    return 0;
}



        
    

