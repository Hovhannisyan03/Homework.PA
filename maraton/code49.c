#include <stdio.h>
#include <string.h>

int main()
{
   char arr[20];
   char arr2[20];
   printf("Enter char array(20sym): ");
   for(int i = 0; i < 20; i++)
   {
      scanf(" %c", &arr[i]);
   }
   int j = 0;
   for(int i = 0; i < 20; ++i)
   {
      if(arr[i] != ' ')
      {
         arr2[j] = arr[i];
	 j++;
      }
   }

   for(int i = 0; i < j; ++i)
   {
      printf(" %c", arr2[i]);
   }
}

