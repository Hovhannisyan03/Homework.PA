#include <stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;
   printf("Enter num1: ");
   scanf("%d", &num1);
   printf("ENetr num2: ");
   scanf("%d", &num2);

   if(num1!=0 && num2!=0 && num1==num2)
   {
      printf("True\n");
   }
   else 
   {
      printf("False\n");
   }
}
