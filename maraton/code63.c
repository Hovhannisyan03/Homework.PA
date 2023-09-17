#include <stdio.h>

int main()
{  const int  size = 8;
   int arr1[size];
   int arr2[size];

   printf("Enter first array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr1[i]);
   }

   printf("Enter second array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr2[i]);
   }
   
   for(int i = 0; i < size; ++i)
   {
      printf("Mul of %d index numbers: %d\n",i,arr1[i] * arr2[i]);
   }
}
