#include <stdio.h>

int main()
{
   const int size = 8;
   int arr[size] = {7,8,5,3,9,5,62,32};
   int count = 0;

   for(int i = 0; i < size; ++i)
   {
      if(arr[i] % 2 == 0)
      {
         printf("%d ", arr[i]);
	 count++;
      }
   }

   if(count == 0)
   {
      printf("There is not even number\n");
   }
}
