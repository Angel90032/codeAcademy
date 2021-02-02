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

/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/

#include <stdio.h>
#include <string.h>



double atof(char *s);

int main(){
    printf("Enter your string:\n");
    char myString[100];
    gets(myString);
    printf("The result of the function is %lf",atof(myString));
    return 0;
}


double atof(char *s){
    double myNumber = 0;
    int indexMainString = -1;
    int indexFirstPart = 0;
    char subStringFirstPart[100];
    char subStringSecondPart[100];
    int isNegative = 0;

    while (1){
        indexMainString++;
        if (s[indexMainString] == '-'){
            isNegative = 1;

        }else if(s[indexMainString] >= '0' && s[indexMainString] <= '9'){
            subStringFirstPart[indexFirstPart] = s[indexMainString];
            indexFirstPart++;
        
        }else if (s[indexMainString] == '.'){
            break;
        }    
    }

    int lenOfSubStrAfterThePoint = strlen(s) - strlen(subStringFirstPart);

    static int rep = 0;
    for (rep = 0; rep <= lenOfSubStrAfterThePoint;rep ++ ){
        indexMainString++;
        subStringSecondPart[rep] = s[indexMainString];
        
    }
    subStringSecondPart[rep+1] = '\0';
    printf("The first part is %s\n",subStringFirstPart);
    printf("The second part is %s\n",subStringSecondPart);

    int multiplier = 1;
    int sizeOfFirstPart = strlen(subStringFirstPart) - 1;
    
    for (sizeOfFirstPart; sizeOfFirstPart >= 0;sizeOfFirstPart--){
        myNumber += ((int)(subStringFirstPart[sizeOfFirstPart] - 48)) * multiplier;
        printf("The value of myNumber is %lf\n",myNumber);
        multiplier *= 10;
    }

    float secondMultiplier = 0.1;
    int SizeOfSecondPart = strlen(subStringSecondPart);
    int start;
    for (start = 0;start < SizeOfSecondPart; start++){
        myNumber += ((int)(subStringSecondPart[start] - 48) * secondMultiplier);
        printf("The value of myNumber is %lf\n",myNumber);
        secondMultiplier *= 0.1;
    } 


if (isNegative){
    return (myNumber * -1);
}
return myNumber;   

}








