#include <stdio.h>

int main()
{  const int  size = 8;
   int arr[size];
   int even_Count = 0;

   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
      if(arr[i] % 2 == 0)
      {
         even_Count++;
      }
   }

   printf("Even count is %d", even_Count);
}
