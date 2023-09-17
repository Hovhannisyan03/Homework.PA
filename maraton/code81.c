#include <stdio.h>

int main()
{  const int size = 7;
   int arr[size] = {7,8,5,41,2,3,69};
   int* arrp = arr;

   for(int i = 0; i < size; ++i)
   {
      printf( "%d ", *(arrp + i));
   }
}
