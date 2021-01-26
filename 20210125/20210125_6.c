#include <stdio.h>

/* Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/


int main(void){
    char text;
    int numberCounter = 0;
    int letterCounter = 0;
    
    while((text=getchar()) != EOF){
        if(((text >= 'a') && (text <= 'z'))  || ((text >= 'A') && (text <= 'Z'))){
            letterCounter++;
        }else if (( text >= 48) && (text <= 57))
            {
            numberCounter++;
            }
    
        }
    printf("Numbs count is:%i\n",numberCounter);
    printf("Letters count is:%i\n",letterCounter);
    
}
    

