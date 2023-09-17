#include <stdio.h>

int main()
{  int num = 0;
   printf("Enter a number (number>12): ");
   scanf(" %d", &num);
  
   if(num > 12) 
   {
      while(num != 0)
      {
         printf("%d", num % 10);
	 num /= 10;
      }    
   }
   else 
   { 
      printf("Invalid input\n");
   }
}
