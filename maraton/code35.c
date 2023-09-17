#include <stdio.h>

int main()
{
   int num = 0;
   printf("Enter a number: ");
   scanf(" %d", &num);

   if(num > 0)
   {
      for(int i = 1; i <= 10; ++i)
      {
         printf("%d * %d = %d\n",num, i,  num * i);
      }
   }
   else 
   {
      printf("INvalid input\n");
   }
}
