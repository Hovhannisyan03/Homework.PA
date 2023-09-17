#include <stdio.h>

int foo(int number);

int main()
{
   int number = 0;
   printf("Enter number: ");
   scanf(" %d", &number);
   if(foo(number) == 1)
   {
      printf("True\n");
   }
   else
   {
      printf("False\n");
   }
}

int foo(int number)
{  
   int sum = 0;
   for(int i = 1; i <= number/2; ++i)
   {
      if(number % i == 0)
      {
         sum += i;
      }
   }

   if(sum == number)
   {
      return 1;
   }
   else 
   {
      return 0;
   }
}
