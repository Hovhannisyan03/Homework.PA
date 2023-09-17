#include <stdio.h>

int main()
{  const int  size = 8;
   int arr[size];

   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
   }
   
   int j = 1;
   for(int i = 0; i < size/2; ++i)
   {
      int temp = arr[i];
      arr[i] = arr[size-j];
      arr[size-j] = temp;
      ++j;
   }

   for(int i = 0; i < size; ++i)
   {
      printf("%d ", arr[i]);
   }

   
}
