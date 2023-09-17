#include <stdio.h>

int main()
{
   int rating = 0;
   printf("Enter rating: ");
   scanf(" %d", &rating);
   
   if(rating >= 0){
      if(rating >= 90 && rating <= 100)
      {
         printf("A dasaran\n");
      }else if(rating >= 80 && rating <= 89)
      {
         printf("B dasaran\n");
      }else if(rating >= 70 && rating <= 79) 
      {
         printf("C dasaran\n");
      }else if(rating >= 60 && rating <= 69)
      {
         printf("D dasaran\n");
      }else 
      {
         printf("E dasaran");
      }
   }
   else
   {
      printf("Invalid input\n");
   } 
}
