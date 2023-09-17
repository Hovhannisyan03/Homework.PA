#include <stdio.h>

int main()
{
   int x = 0;
   int y = 0;
   int z = 0;
   int e = 0;
   printf("Enter num1: ");
   scanf("%d", &x);
   printf("Enter num2: ");
   scanf("%d", &y);
   printf("Enter num3: ");
   scanf("%d", &z);
   printf("Enter num4: ");
   scanf("%d", &e);

   if(x + y + z + e == 0)
   {
      if(x <= y && x <= z && x <= e)
      {
         printf("Min is %d", x);
      }
      else if(y <= x && y <= z && y <= e)
      {
         printf("Min is %d", y);
      }
      else if(z <= x && z <= y && z <= e)
      {
         printf("Min is %d", z);
      }
      else 
      {
         printf("Min is %d", e);
      }
   }
   else 
   {
      printf("False\n");
   }
}
