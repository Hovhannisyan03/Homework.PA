#include <stdio.h>

int main()
{  const int size = 7;
   int arr[size] = {4,7,8,6,5,2,3};
   int* arrp = arr;

   for(int i = 0; i < size; ++i)
   {
      printf( "%d ", *(arrp + i));
   }
}
