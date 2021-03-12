#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void ctrlc_handler(int iUnused){
    printf("\nCtrl + C\n");
    exit(EXIT_FAILURE);
}

void ctrlZ_handler(int iUnused){
    printf("\nCtrl + Z\n");
    exit(EXIT_FAILURE);
}

void ctrlD_handler(int iUnused){
    printf("\nCtrl + D\n");
    exit(EXIT_FAILURE);
}

int main(){
    signal(SIGINT,ctrlc_handler);
    signal(??? ,ctrlD_handler);
    signal(SIGTERM,ctrlZ_handler);
    while(!0){
        printf("Hellooo\n");
        sleep(1);
    }
}