#include <stdio.h>

int main()
{
   const int size = 8;
   int arr[size] = {12,33,56,55,41,27,78,85};
   int odd[size];
   int even[size];
   int in1 = 0;
   int in2 = 0;

   for(int i = 0; i < size; ++i)
   {
      if(arr[i] % 2 == 1)
      {
         odd[in1] = arr[i];
	 ++in1;
      }
      else
      {
         even[in2] = arr[i];
	 ++in2;
      }
   }
   
   for(int i = 0; i < in2; ++i)
   {  
      arr[i] = even[i];
   }
   
   int temp = 0;
   for(int i = in2; i < size; ++i)
   {
      arr[i] = odd[temp];
      ++temp;
   }

   for(int i = 0; i < size; ++i)
   {
      printf("%d ", arr[i]);
   }
}
