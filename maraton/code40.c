#include <stdio.h>

int main()
{
   int num = 0;
   printf("Eter number (0-100): ");
   scanf(" %d", &num);
   
   int x = 0;
   printf("Guess the number: ");
   while(1)
   {
      scanf(" %d", &x);
      if(x == num)
      {
         break;
      }
      else if(x > num)
      {
         printf("Is high\n");
      }
      else 
      {
         printf("Is low\n");
      }
   } 
   printf("Correct answer is %d", num);
}
