#include <stdio.h>

int main()
{  const int  size = 8;
   int arr[size];
   int sum = 0;

   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
      sum += arr[i];
   }

   printf("Sum = %d", sum);
}
