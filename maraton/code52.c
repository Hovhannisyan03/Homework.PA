#include <stdio.h>


int main()
{
   char arr[20];
   printf("Enter char array: ");
   for(int i = 0; i < 20; ++i)
   {
      scanf(" %c", &arr[i]);
   }
   
   int count = 0;

   for(int i = 0; i < 20; ++i)
   {
      if(arr[i] >= '0' && arr[i] <= '9')
      {
         count++;
      }
   }

   if(count != 0)
   {
   printf("Invalid input\n");
   return 0;
   }

   for(int i = 0; i < 20; ++i)
   {
      if(arr[i] >= 'a' && arr[i] <= 'z')
      {
         arr[i] -= 32;
	 printf(" %c", arr[i]);
      }
      else
      {
         printf(" %c", arr[i]);
      }
   }

}
