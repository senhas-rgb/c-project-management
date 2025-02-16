#include <stdio.h>
#include <string.h>

void colors(char color[]){
    if (strcmp(color, "reset")==0){
        printf("\033[0m]\n");
    } else if (strcmp(color, "yellow")==0){
        printf("\033[1;33m]\n");
    } else if (strcmp(color, "red")==0){
        printf("\033[1;31m]\n");
    } else {
        printf("\033[1;31m]\n");
        printf("Error unidentified color.\n");
        printf("\033[0m]\n");
    }
}