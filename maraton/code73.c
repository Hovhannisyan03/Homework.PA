#include <stdio.h>

int main()
{  const int size = 5;
   int arr1[size] = {4,5,7,8,6};
   int arr2[size] = {7,9,5,3,6};
   int sumarr[2*size];
   int index = 0;
   for(int i = 0; i < size; ++i)
   {
      sumarr[index] = arr1[i];
      ++index;
   }

   for(int i = 0; i < size; ++i)
   {
      sumarr[index] = arr2[i];
      ++index;
   }

   for(int i = 0; i < 2*size;++i)
   {
      printf("%d ", sumarr[i]);
   }
}
