#include <stdio.h>

int main()
{
   int size = 0;
   printf("Enter size of array: ");
   scanf(" %d", &size);
   int arr[size];

   if(size <= 0) 
   {
      printf("Invalid input\n");
   }
   else  
   {  printf("Enter the elements of the array: ");
      for(int i = 0; i < size; i++) 
      {
         scanf(" %d", &arr[i]);
      }
      printf("The array elements are: ");
      for(int i = 0; i < size; i++)
      {
         printf("%d ", arr[i]);
      }
      printf("\n");
   }

}	
