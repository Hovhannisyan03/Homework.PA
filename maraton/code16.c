#include <stdio.h>

int main()
{
   int high = 0;
   printf("Enter high: ");
   scanf(" %d", &high);
   
   if(high >= 0){
      if(high >= 150)
      {
         printf("Duq hamapatasxanum eq\n");
      }
      else 
      {
         printf("Neroxutyun. duq cheq hamapatasxanum\n");
      }
   }
   else
   {
      printf("Invalid input\n");
   } 
}
