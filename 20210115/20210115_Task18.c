#include <stdio.h>

int main(void){
    char rezCaravanOrCamper;
    unsigned short int wantedDays;
    int moneyToBePaid;
    unsigned short int caravanCount = 3;
    unsigned short int caravanPricePerday = 90;
    unsigned short int camperCount = 3;
    unsigned short int camperPricePerDay = 100;

    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rezCaravanOrCamper);

    printf("Za kolko dni iskate da gi naemete ?\n"); /*priemame, che trqbva da naeme ili 3 karavani ili 3 kempera */
    scanf("%d", &wantedDays);
    printf("%i dni? Chudesen izbor\n",wantedDays);

    if (rezCaravanOrCamper == 1){
        moneyToBePaid = caravanCount * caravanPricePerday * wantedDays;
        printf("Za izbraniqt ot vas prestoi dyljite %i leva, shte jelaete li oshte neshto?",moneyToBePaid);
    } else {
        moneyToBePaid = camperCount * camperPricePerDay * wantedDays; /* приемаме, че може да въведе само 1 | 2 */
        printf("Za izbraniqt ot vas prestoi dyljite %i leva, shte jelaete li oshte neshto?",moneyToBePaid);
    }

}