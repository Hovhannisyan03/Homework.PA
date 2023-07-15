// Գրեք ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի և տպում է՝ տարին նահանջ տարի է, թե ոչ:

#include <stdio.h>

int leepYear(int year)
{
   if(year % 400 == 0)
   {
      return 1;
   }
   else if(year % 100 == 0)
   {
      return 0;
   } 
   else if(year % 4 == 0)
   {
      return 1;
   }
   else
   {
      return 0;
   } 
}

int main()
{
   int year = 0;
   printf("Enter the year: ");
   scanf(" %d", &year);

   if(leepYear(year)==1)
   {
      printf("%d is a leep year\n", year);
   }
   else 
   {
      printf("%d is not a leep year\n", year);
   }
	   
}
