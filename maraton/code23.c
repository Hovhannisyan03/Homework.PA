#include <stdio.h>

int main()
{
   int x = 0;
   int y = 0;
   int z = 0;
   printf("Enter num1: ");
   scanf("%d", &x);
   printf("Enter num2: ");
   scanf("%d", &y);
   printf("Enter num3: ");
   scanf("%d", &z);

   if(x == y || x == z || y == z)
   {
      if(x >= y && x >= z)
      {
         printf("Max is %d", x);
      }
      else if(y >= x && y >= z)
      {
         printf("Max is %d", y);
      }
      else if(z >= x && z >= y)
      {
         printf("Max is %d", z);
      }
   }
   else 
   {
      printf("False\n");
   }
}
