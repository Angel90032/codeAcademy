/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

#include <stdio.h>


typedef long long int t_llint;
typedef  t_llint* t_ptr;

t_llint myFunc(t_ptr x , t_ptr y);



int main(void){
    t_llint val1 = 200;
    t_llint val2 = 300;
    t_ptr p1 = &val1;
    t_ptr p2 = &val2;

    printf("%lli",myFunc(p1,p2));

    


    return 0;
}

t_llint myFunc(t_ptr x , t_ptr y){
    t_llint res = (*x + *y) * 2;
    return res;

}
