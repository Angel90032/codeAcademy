

/*Задача 3.Какво е грешното на този код?
void my_strcpy(char *t, char *s){
    for(; *t; t++, s++)
    *s = *t;
}*/


/* Грешното на този код е, че когато се стигне до *t = '\0' for cycle-ът ще спре 
и няма да се изпълни *s = *t т.е терминираща нула няма да се запише на края на масива *s.
Това може да доведе до проблем, ако в масива *s е имало стара информация, тя би останала част от новия масив,
на позициите , в които не сме записали стойностите на елементите от *t
*/