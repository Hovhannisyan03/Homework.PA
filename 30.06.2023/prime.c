#include <stdio.h>

int main()
{
    int number = 0;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number == 0)
    {
        printf("The number is not a simple\n");
    } else if (number > 0) 
    {
        for(int i = 1; i <= number; i++)
        {
            if(number % i == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("The number is a simple\n");
        }else 
        {
            printf("The number is not a simple\n");
        }
    }
}