#include <stdio.h>
#include <stdlib.h>

int main()
{  int size = 0;
   int number = 2;
   printf("Enter array size: ");
   scanf(" %d", &size);
   int* arr = (int*)malloc(size * sizeof(int));
   
   int index = 0;
   int count = 0;
   while(index != size)
   {
      for(int i = 2; i <= number; ++i)
      {
         if(number % i == 0)
	 {
	    ++count;
	 }
      }
      if(count == 1)
      {
         arr[index] = number;
	 index++;
      }
      ++number;
      count = 0;
   }
   
   printf("Prime array: ");
   for(int i = 0; i < size; ++i)
   {
      printf("%d ", arr[i]);
   }
}
