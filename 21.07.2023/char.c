#include <stdio.h>
#include <string.h>
int main()
{
   int size = 0;
   printf("Enter the size of char array: ");
   scanf(" %d", &size);
   char arr[size];

   if (size <= 0) 
   {
      printf("Invalid input\n");
   }
   else 
   {
      printf("Enter the elements: ");
      for (int i = 0; i < size; i++)
      {
         scanf(" %c", &arr[i]);
      }
      for (int i = 0; i < size; i++)
      {
         if(arr[i] >= 48 && arr[i] <= 57)
	 {
	    printf("%c ", arr[i]);
	 }
      }
      printf("\n");
   }
}
