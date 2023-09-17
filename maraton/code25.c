#include <stdio.h>

int main()
{
   int year = 0;
  
   printf("Enter year: ");
   scanf("%d", &year);
   
   if(year > 0) 
   {
      if(year % 400 == 0)
      {
         printf("Leep year\n");
      }
      else if(year % 100 == 0)
      {
         printf("Not a leep year\n");
      }
      else if(year % 4 == 0)
      {
         printf("Leep year\n");
      }
      else 
      {
         printf("Not a leep year\n");
      }
   } 
}
