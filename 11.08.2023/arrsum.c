#include <stdio.h>

void arrSum(int *arr, int size);
int main ()
{
   const int size = 5;
   int arr[size];
   printf("Enter the elements of arr(%d): ", size);
   for (int i = 0; i < size; i++)
   {
      scanf(" %d", &arr[i]);
   }
   arrSum(&arr[0], size);
}

void arrSum(int *arr, int size)
{  int sum = 0;
   for (int i = 0; i < size; i++)
   {
      sum += arr[i];
   }
   printf("%d\n", sum);
}
