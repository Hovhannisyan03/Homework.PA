#include <iostream>

int main()
{
    char sym = 0;
    printf("Enter a number: ");
    scanf("%c", &sym);

    if(sym >= 'A' && sym <= 'Z')
    {
       sym += 32;
       printf("%c", sym);
    }
    else 
    {
       printf("Invalid input");
    }
}
