#include <stdio.h>
#include <limits.h>

int main()
{  const int size = 8;
   int arr[size] = {1,8,6,4,7,9,13,3};
   int min = INT_MAX;
   int min2 = INT_MAX;
   for(int i = 0; i < size; ++i)
   {
      if(arr[i] < min)
      {
         min = arr[i];
      }else if(arr[i] < min2)
      {
         min2 = arr[i];
      }
   }

   printf("Min2 = %d", min2);
}
