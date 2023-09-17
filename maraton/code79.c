#include <stdio.h>

int main()
{
   const int size = 8;
   int arr1[size];
   int arr2[size];
   int index = 0;
   
  printf("Enter first array elements:(%d) ", size); 
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr1[i]);
   }
   printf("Enter second array elements:(%d) ",size);
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr2[i]);
   }
   
   int count = 0;
   for(int i = 0; i < size; ++i)
   {
      if(arr1[i] == arr2[i])
      {
         ++count;
      }
   }

   if(count == size)
   {
      printf("True\n");
   }
   else 
   {
      printf("False\n");
   }
}
