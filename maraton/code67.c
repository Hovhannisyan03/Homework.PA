#include <stdio.h>

int main()
{  const int  size = 8;
   int arr[size];
   int prime = 0;
   int count = 0;
   printf("Enter array elements: ");
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", &arr[i]);
   }
   
   for(int i = 0; i < size; ++i)
   {
      for(int j = 2; j < size/2; ++j)
      {  
	 if(arr[i] == 0)
	 {
	    continue;
	 }
         else if(arr[i] % j == 0)
	 {
	    ++prime;
	 }
      }
      if(prime == 0)
      {
         printf("%d is prime\n", arr[i]);
	 ++count;
      }
      prime = 0;
   }
   if(count == 0)
   {
      printf("There is no prime number\n");
   }
}
