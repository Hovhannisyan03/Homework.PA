#include <stdio.h>

int main(){
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 1) 
    {
        printf("The number is odd\n");
    } else
    {
        printf("The number is even\n");
    }
}