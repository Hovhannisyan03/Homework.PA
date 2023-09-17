#include <stdio.h>

int main()
{
   int fact = 1;
   int num = 0;
   printf("Enter a numer: ");
   scanf(" %d", &num);
   
   if(num < 0)
   {
      printf("Invalid input\n");
      return 0;
   }
   else if(num == 0 || num == 1)
   {
      printf("0! = 1! = 1");
   }
   else{
      for(int i = 2; i <= num; ++i)
      {
         fact *= i;
      }
   printf("%d! = %d\n",num,fact);
   }
}
