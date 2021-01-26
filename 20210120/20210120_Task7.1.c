#include <stdio.h>

int main(){
    printf("Press 1 to see message Hello\n");
    printf("Press 2 to see Poem\n");
    printf("Press 3 to see hidden message\n");

    char cAnswer ;
    scanf("%c",&cAnswer);

    if (cAnswer == '1'){
        printf("Hello");
    }
    else if ( cAnswer == '2'){
        printf("Some poem");
    }
    else if (cAnswer == '3'){
        printf("Some hidden message");
    }else{
        printf("You did not enter a valid answer");
    }


    return 0;
}