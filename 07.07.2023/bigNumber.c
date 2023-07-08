// Գրեք ծրագիր, թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը:
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    
    printf("Enter a num1: ");
    scanf("%d", &num1);
    printf("Enter a num2: ");
    scanf("%d", &num2);
        if(num1 > num2) 
        {
            printf("The biggest number is %d", num1);
        }else if(num1 < num2)
        {
            printf("The biggest number is %d", num2);
        } else 
        {
            printf("The numbers are equal");
        }
    return 0;
}