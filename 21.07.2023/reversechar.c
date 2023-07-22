#include <stdio.h>

int main()
{
   int size = 0;
   printf("Enter the size of char array: ");
   scanf(" %d", &size);
   char arr[size];

   if(size <= 0) 
   {
      printf("Invalid input\n");
   }
   else 
   {
      printf("Enter the elements of the array: ");
      for(int i = 0; i < size; i++)
      {
         scanf(" %c", &arr[i]);
      }
      printf("Reverse char array are: ");
      for (int i = size-1; i >= 0; i--) 
      {
         printf("%c ", arr[i]);
      }
      printf("\n");
   }
}
