#include <stdio.h>

int main()
{  const int size = 8;
   int arr[size];
   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
      printf("%d ", arr[i]);
   }
}
