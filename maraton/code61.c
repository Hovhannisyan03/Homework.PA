#include <stdio.h>
#include <limits.h>

int main()
{  const int  size = 8;
   int arr[size];
   int min = INT_MAX;
   int max = INT_MIN;

   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
      if(arr[i] < min)
      {
         min = arr[i];
      }
      if(arr[i] > max)
      {
         max = arr[i];
      }
   }

   printf("Sum of min and max numbers is %d", min + max);
}
