#include <stdio.h>
#include <limits.h>

int minNum(int arr[], const int size) 
{
   int min = INT_MAX;
   for(int i = 0; i < size; i++)
   {
      if(min > arr[i])
      {
         min = arr[i];
      }
   }
   return min;
}

int main()
{  const int size = 3;
   int arr[size];
   int i = 0;
   int maxDivider = INT_MIN;
   printf("Enter the elements of the array: ");
   do
   {
      scanf(" %d", &arr[i]);
      i++;
   } while (i < 3);
   if (minNum(arr, size) == 0)
   {
      printf("Invalid input\n");
      return 1;
   }
   for(int i = 1; i <= minNum(arr, size);i++)
   {  int count = 0;
      if(minNum(arr, size) % i == 0)
      {
         for(int j = 0; j < size; j++)
	 {
	    if(arr[j] % i == 0)
	    {
	       count++;
	    }
	    else
	    {
	       break;
	    } 
	 }
	 if(count == 3 && maxDivider < i)
	 {
	    maxDivider = i;
	 }
      }
   }
   printf("%d is the greatest divisor\n", maxDivider);   
   return 0;
}
