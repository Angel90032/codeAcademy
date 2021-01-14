#include <stdio.h>

void printTop(){

    char cSpace = 32;
    char cHashtag = 35;

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace
    ,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag);

}

void printBottom(){

    char cSpace = 32;
    char cHashtag = 35;

    /*printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag);*/
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cHashtag,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace,cHashtag,cSpace
    ,cHashtag,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
    cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cHashtag,cSpace
    ,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace,cSpace);
}

int main(){
    printTop();
    printBottom();

    return 0;
}