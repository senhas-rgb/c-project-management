#include <stdio.h>
#include <string.h>
#include "color.h"
#include "menu.h"

int main(int argc, char* argv[]){
    if (argc > 1){
        if (strcmp(argv[1], "add") == 0) {
            if (argc > 2) {
                printf("File name: %s\n", argv[2]);
            } else {
                colors("red");
                printf("ERROR: File name not given.\n");
                colors("reset");
                return 1;
            }
        } else {
            colors("red");
            printf("ERROR: Identified argument.\n");
            colors("reset");
            return 1;
        }
    } else {
        colors("yellow");
        printf("NOTE: No argument given.\n");
        colors("reset");
    }
    
    menu_gui();
    return 0;
}