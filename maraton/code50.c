#include <stdio.h>


int main()
{
   char arr[20];
   printf("Enter char array: ");
   for(int i = 0; i < 20; i++)
   {
      scanf(" %c", &arr[i]);
   }

   for(int i = 0; i < 20; ++i)
   {
      if(arr[i] >= '0' && arr[i] <= '9')
      {
         printf("%c ", arr[i]);
      }
   }
}

