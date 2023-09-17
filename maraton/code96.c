#include <stdio.h>                                    

int corner(int arr[3][3], const int size);

int main()
{
   const int size = 3;
   int arr[size][size];

   printf("Enter matrix elements(3x3)\n");
   for(int i = 0; i < size; ++i)
   {
      for(int j = 0; j < size; ++j)
      {
         scanf(" %d", &arr[i][j]);
      }
   }

   printf("Sum = %d", corner(arr,size));
}

int corner(int arr[3][3], const int size)
{  
   int sum = 0;
   for(int i = 0; i < size; ++i)
   {
      for(int j = 0; j < size; ++j)
      {
         if(i == j || i < j)
	 {
	    sum += arr[i][j];
	 }
      }
   }
   return sum;
}

//00 01 02
//10 11 12
//20 21 22
