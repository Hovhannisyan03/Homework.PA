#include <stdio.h>

int main()
{
   const int size = 8;
   int arr[size] = {12,32,56,55,41,32,78,85};
   int odd[size];
   int index = 0;

   for(int i = 0; i < size; ++i)
   {
      if(arr[i] % 2 == 1)
      {
         odd[index] = arr[i];
	 ++index;
      }
   }
   
   printf("Odd array: ");
   for(int i = 0; i < index; ++i)
   {
      printf("%d ", odd[i]);
   }
}
