#include <stdio.h>

int main () {
    int x = 1;
    int y = 1;

    if(x)
        switch(y){
            case 1:
                printf("1\n");
            case 2:
                printf("2\n");
            default:
                printf("Invalid input");
        }
}