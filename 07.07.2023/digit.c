#include <stdio.h>

int main (){
    char sym;
    printf("Enter a symbol: ");
    scanf("%c", &sym);
  
    if(sym >= 48 && sym <= 57)
    {
         printf("The symbols is a digit\n");
    } else
    {
         printf("False\n");
    }
}
