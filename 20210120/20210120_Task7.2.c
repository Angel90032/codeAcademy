#include <stdio.h>

int main(){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    char cAnswer ;
    scanf("%c",&cAnswer);

    switch (cAnswer){
        case ('1'):
            printf("Hello World\n");
            break;
        
        case ('2'):
            printf("Some poem\n");
            break;

        case ('3'):
            printf("Some hidden message");
            break;
    }

}