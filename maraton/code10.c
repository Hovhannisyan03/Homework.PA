#include <iostream>

int main()
{
    char sym = 0;
    printf("Enter a number: ");
    scanf("%c", &sym);

    if(sym >= '0' && sym <= '9')
    {
       
       printf("True");
    }
    else 
    {
       printf("False");
    }
}
