#include <stdio.h>

int main()
{
   int x = 0;
   int y = 0;
   
   printf("Enter num1: ");
   scanf(" %d", &x);
   printf("Enter num2: ");
   scanf(" %d", &y);
   printf("Max is %d\n", x > y ? x : y);
}
