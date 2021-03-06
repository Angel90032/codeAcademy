/* Задача 2. Напишете функцията int atof(char *s), която
преобразува стринг в число с десетична запетая. Тази функция е
подобна на разглежданата по горе atoi(char *s), само че когато се
стигне до . точката, отделяща цялата част от дробната, трябва
да се пусне още един цикъл, който да изчисли числото в
дробната част по същия начин, както е числото в цялата част.
Само че тук при дробната част трябва да имаме една
променлива, която да умножаваме по 10 всеки път до края на
дробната част power *= 10; Накрая трябва да разделим
полученото число на тази променлива, за да получим реалното
число с плаващата заперая на точното място. */

#include <stdio.h>
#include <string.h>



double atof(char *s);

int main(){
    printf("Enter your string:\n");
    char myString[100];
    gets(myString);
    atof(myString);
    double result = atof(myString);
    printf("The result of the function is %lf\n",result);
    printf("The result of myNumber + 100 = %lf\n",(result+100));
    printf("The result of myNumber *2 = %lf\n",(result *2));
    return 0;
}


double atof(char *s){
    double myNumber = 0;
    char *p = s;
    char subStringFirstPart[100];
    char subStringSecondPart[100];
    int indexSubstring = 0;

    while (1){
        
        if (*p != '.'){
            subStringFirstPart[indexSubstring] = *p;
            indexSubstring++;
            p++;
            
        }else{
            subStringFirstPart[indexSubstring] = '\0';
            
            break;
        }
              
    }
    
    int lenOfSubStrAfterThePoint = strlen(s) - strlen(subStringFirstPart);

    static int rep = 0;
    for (rep = 0; rep <= lenOfSubStrAfterThePoint;rep ++ ){
        p++;
        subStringSecondPart[rep] = *p;
        
    }
    subStringSecondPart[rep+1] = '\0';
    printf("The first part is %s\n",subStringFirstPart);
    printf("The second part is %s\n",subStringSecondPart);

    int multiplier = 1;
    int sizeOfFirstPart = strlen(subStringFirstPart) - 1;

    char *pFirstPart = &subStringFirstPart[strlen(subStringFirstPart)-1];
    
    for (sizeOfFirstPart; sizeOfFirstPart >= 0;sizeOfFirstPart--){
        myNumber += ((int)(*pFirstPart - 48)) * multiplier;
        printf("The value of myNumber is %lf\n",myNumber);
        multiplier *= 10;
        pFirstPart--;
    }

    float secondMultiplier = 0.1;
    int SizeOfSecondPart = strlen(subStringSecondPart);
    int start;
    char *pSecondPart = subStringSecondPart;
    for (start = 0;start < SizeOfSecondPart; start++){
        myNumber += ((int)(subStringSecondPart[start] - 48) * secondMultiplier);
        printf("The value of myNumber is %lf\n",myNumber);
        secondMultiplier *= 0.1;
        pSecondPart++;
    } 



return myNumber;  

}