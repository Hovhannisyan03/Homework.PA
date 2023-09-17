#include <stdio.h>                                    

void corner(int arr[3][3], const int size);

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
   corner(arr,size);

}

void corner(int arr[3][3], const int size)
{  
   int sum = 0;
   for(int i = 0; i < size; ++i)
   {  int temp = arr[i][i];
      arr[i][i] = arr[i][size-1-i];
      arr[i][size-1-i] = temp; 
   }
   
   for(int i = 0; i < size; ++i)
   {
       for(int j = 0; j < size; ++j)
       {
          printf("%d ", arr[i][j]);
       }
       printf("\n");
   }
}

//00 01 02
//10 11 12
//20 21 22
