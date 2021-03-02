/*https://bg.wikipedia.org/wiki/Pragma_once*/

/*По принцип pragma once е по-бързо за изпълнение, но в GCC "специално оптимизиран код за разпознаване и оптимизиране на "include guards"-ове, 
затова е възможно минимално или никакво подобрение в скоростта на компилиране при използването на #pragma once." */


#ifndef _MYHEADER_H_   /*Ако не е дефиниран го дефинираме, ако е вече дефиниран не изпълняваме кода до #endif*/
#define _MYHEADER_H_
/* header declarations */
#endif // _MYHEADER_H_