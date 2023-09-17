#include <stdio.h>
#include <limits.h>

int main()
{  const int  size = 8;
   int arr[size];
   int min = INT_MAX;
   int max = INT_MIN;
   int min_Index = 0;
   int max_Index = 0;

   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
      if(arr[i] < min)
      {
         min = arr[i];
	 min_Index = i;
      }
      if(arr[i] > max)
      {
         max = arr[i];
	 max_Index = i;
      }
   }

   printf("Sub of index %d", max_Index - min_Index);
}
