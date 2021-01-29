/*Трябва да направите софтуер за заявки на хотел. 
Хотелът има два типа стаи - Луксозна, с цена 180 лв на нощ, Стандартна -120 лв на нощ.
Туристическият данък е 6%. Направете програма, която калкулира очаквана себестойност 
  за клиентите в зависимост от брой нощувки и стаи, и я отпечатва на екрана.
Валидността на офертата е 14 дни.

Продължение 1:
> Ако клиентът заяви повече от 5 нощувки, независимо в какви и колко стаи, получава 15% отстъпка от цената.

Продължение 2:
> Ако клиентът направи оборот без данък повече от 700 лв за нощувки общо може да избира, 
  дали да получи 15% отстъпка или да получи спа процедура за 100 лв.
> След като клиентът направи своя избор, трябва да отпечатате цялото предложение на екран.

Продължение 3:
> Ако клиентът заяви нощувки за повече от 1000 лв. общо, може да избира между:
> 20% отстъпка
> Спа процедура на стойност 200 лв
> 2 Безплатни вечери за семейството
След като клиентът заяви своя избор, трябва да отпечатате финалната оферта на екран. */

/*Changes made by team 8:
1. We have added the condition of the task to the file.
2.Lines 73-74 and 79-80 can be optimized by lines 91-92.
3.Line 106 - We have added a printf to show the customer his cost before the discount.
4. Продължение 1: Ако клиентът заяви повече от 5 нощувки, независимо в какви и колко стаи, получава 15% отстъпка от цената. 
При тези цени е невъзможно при повече от 5 нощувки да има оборот по-малък от 700 лв. 6 * 120 = 720*/

#include <stdio.h>
#include <time.h>
#include <string.h>

#define FIFTEEN_PERCENT 0.15
#define TWENTY_PERCENT 0.20
#define TOURIST_TAX_RATE 0.06
#define SECONDS_TO_DAYS 24*60*60
#define SEPARATOR "######################\n"

double chooseRooms(char type[], double price, unsigned short int *number, unsigned short int *nights);
double discountsAndBonuses(unsigned short int nights, double subTotal);
int validDate();

int main()
{
    const double c_luxuryRoomPrice = 180;
    const double c_standardRoomPrice = 120;

    unsigned short int roomsLuxury = 0;
    unsigned short int nightsLuxury = 0;
    unsigned short int roomsStandard = 0;
    unsigned short int nightsStandard = 0;
    unsigned short int totalNights = 0;
    double luxuryTotal = 0;
    double standardTotal = 0;
    double subTotal = 0;
    double discount = 0;
    double touristTax = 0;
    double total = 0;

    /* ------------ ГЛАВНО МЕНЮ ------------ */
    char choice = 0;
    printf("\nWelcome to hotel Sunrise!\n");
    printf("In our hotel we have Luxury and Standard rooms.\n");
    printf("Please make your choice!\n");

    while (choice != '3')
    {
        printf(SEPARATOR);
        printf("For Luxury rooms type 1.\n");
        printf("For Standard rooms type 2.\n");
        printf("To exit type 3. ");
        scanf(" %c", &choice);
        printf(SEPARATOR);

        switch (choice)
        {
            case '1':
                /* Функцията е меню за избор брой на стаи и ноюувки, връща общата цена */
                luxuryTotal = chooseRooms("Luxury", c_luxuryRoomPrice, &roomsLuxury, &nightsLuxury);
                /*subTotal = luxuryTotal + standardTotal;
                printf("Your current bill is %.2f leva.\n", subTotal);*/
                break;

            case '2':
                standardTotal = chooseRooms("Standard", c_standardRoomPrice, &roomsStandard, &nightsStandard);
                /*subTotal = luxuryTotal + standardTotal;
                printf("Your current bill is %.2f leva.\n", subTotal);*/
                break;

            case '3':
                break;

            default:
                printf("Invalid choice!\n");
                break;
        
        }
        subTotal = luxuryTotal + standardTotal;
        printf("Your current bill is %.2f leva.\n", subTotal); /*Lines 73-74 and 79-80 can be substituted by lines 91-92 */
    }

    /* ------------ ОТСТЪПКИ И БОНУСИ ------------  */
    totalNights = nightsStandard * roomsStandard + nightsLuxury * roomsLuxury;

    discount = discountsAndBonuses(totalNights, subTotal);
    if ((int) discount) 
    {   
        printf("Your cost before the discount was %.2f leva\n",subTotal); /*Maybe its better if the customer can see his cost before the discount. */
        subTotal -= discount;
        printf("Your discount is %.2f leva.\n", discount);
        printf("Your bill after discount is: %.2f leva.\n", subTotal);
    }
    

    /* ------------ ФИНАЛНА ОФЕРТА ------------ */
    touristTax = subTotal * TOURIST_TAX_RATE;
    total = subTotal + touristTax;
    printf("You owe tourist tax: %.2f leva.\n", touristTax);
    printf("Your final offer is:\n");
    printf("%d Standard rooms for %d nights.\n", roomsStandard, nightsStandard);
    printf("%d Luxury rooms for %d nights.\n", roomsLuxury, nightsLuxury);
    printf("Total nights: %d\n", totalNights);
    printf("Final bill: %.2f leva\n", total);
    validDate();
    printf(SEPARATOR);

   return 0;
}

double chooseRooms(char type[], double price, unsigned short int *number, unsigned short int *nights) 
{
    /* Вече повторното избиране на стая презаписва избора, а не добавя към предишния */
    printf("Your choice is %s room.\n", type);
    printf("How many nights are you going to stay? ");
    scanf("%hu", nights);
    printf("How many %s rooms would you like? ", type);
    scanf("%hu", number);
    return price * *number * *nights;
}

double discountsAndBonuses(unsigned short int nights, double subTotal)
{
    double discount = 0;
    char choice = 0;

    if (nights > 5 && subTotal < 700)
    {
        discount = subTotal * FIFTEEN_PERCENT;
        printf("You get a 15 percent discount.\n");
        return discount;
    }

    /* Отстъпка за над 700лв оборот */
    else if (subTotal >= 700 && subTotal < 1000)
    {
        printf("You can choose between a 15 percent discount and a free spa procedure for 100 leva.\n");

        while (! (choice=='1' || choice=='2') ) 
        {
            printf("For a 15 percent discount type 1.\n");
            printf("For a free spa procedure type 2. ");
            scanf(" %c", &choice);
            switch (choice)
            {
                case '1':
                    discount = subTotal * FIFTEEN_PERCENT;
                    printf(SEPARATOR);
                    printf("You get a 15 percent discount.\n");
                    return discount;

                case '2':
                    printf(SEPARATOR);
                    printf("You get a free spa procedure for 100 leva.\n");
                    return 0.0;

                default:
                    printf("Invalid choice!\n");
                    break;
            }
        }
    }

    /* Отстъпка за над 1000лв оборот */
    else if (subTotal >= 1000)
    {
        printf("You can choose between a 20 percent discount,\n a free spa procedure for 100 leva and\n 2 free dinners for your family.\n");

        while (! (choice=='1' || choice=='2' || choice=='3') ) 
        {
            printf("For a 20 percent discount type 1.\n");
            printf("For a free spa procedure type 2.\n");
            printf("For 2 free dinners for your family type 3. ");
            scanf(" %c", &choice);
            switch (choice)
            {
                case '1':
                    discount = subTotal * TWENTY_PERCENT;
                    printf(SEPARATOR);
                    printf("You get a 20 percent discount.\n");
                    return discount;

                case '2':
                    printf(SEPARATOR);
                    printf("You get a free spa procedure for 100 leva.\n");
                    return 0.0;

                case '3':
                    printf(SEPARATOR);
                    printf("You get 2 free dinners for your family.\n");
                    return 0.0;
                    
                default:
                    printf("Invalid choice!\n");
                    break;
            }
        }
    }
}

int validDate()
{
    long long int t;
    t = time(NULL);
    t += 14 * SECONDS_TO_DAYS; /* две седмици (14 дена) след сегашното време */
    printf("This offer is valid until %s", ctime(&t) );
}
