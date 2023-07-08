// Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x և y ամբողջ թվային փոփոխականների արժեքները և կտպի էկրանին 
// (x * y + 21 * x / y - 200) արտահայտության արդյունքը:

#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if(y != 0)
    {
        int result = x * y + 21 * x / y - 200;
        printf("The result is %d: ", result);
    } else 
    {
        printf("Invalid input");
    }
}