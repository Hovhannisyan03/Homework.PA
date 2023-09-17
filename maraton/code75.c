#include <stdio.h>
#include <limits.h>

int main()
{  const int size = 8;
   int arr[size] = {1,8,6,4,7,9,13,3};
   int max1 = INT_MIN;
   int max2 = INT_MIN;
   int max3 = INT_MIN;

   for(int i = 0; i < size; ++i)
   {
      if(arr[i] > max1)
      {  max3 = max2;
	 max2 = max1;
         max1 = arr[i];
      }else if(arr[i] > max2)
      {  max3 = max2;
         max2 = arr[i];
      }else if(arr[i] > max3)
      {
         max3 = arr[i];
      }
   }

   printf("Max3 = %d", max3);
}
