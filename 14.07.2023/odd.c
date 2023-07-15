// Գրեք ծրագիր, որը էկրանին տպում է միայն 0-ից 100-ի կենտ թվերը:
#include <stdio.h>

int main()
{
   int i = 0;

   while (i <= 100)
   {  if(i % 2 == 1){
      printf(" %d", i);
      }
      i++;
   }
   printf("\n");
   return 0;
}

