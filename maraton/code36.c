#include <stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;
   printf("Enter num1: ");
   scanf(" %d", &num1);
   printf("Enter num2: ");
   scanf(" %d", &num2);
   int sum = 0;

   if(num1 > num2)
   {
      for(int i = num2+1; i < num1; ++i)
      {
         if(i % 2 == 0)
	 {
	    sum += i;
	 }
      }
      printf("Sum = %d", sum);
      return 0;
   }
   else if(num1 < num2)
   {
      for(int i = num1+1; i < num2; ++i)
      {
         if(i % 2 == 0)
	 {
	    sum += i;
	 }
      }
      printf("Sum = %d", sum);
      return 0;
   }
   else 
   {
      printf("0");
   }
}
