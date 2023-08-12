//Իրականացնել ֆունկցիա, որը սորտավորում է ամբողջ թվով զանգվածի տարրերը։

#include <stdio.h>

void sorted(int* arr, int size);

int main ()
{
   const int size = 7;
   int arr[size];
   printf("Enter the elements of array(%d) : ", size);
   for (int i = 0; i < size; i++)
   {
      scanf(" %d", &arr[i]);
   }
   sorted(&arr[0], size);
}

void sorted(int* arr, int size)
{
   
   for (int i = 0; i < size; i++)
   {  
      for (int j = 0; j < size; j++)
      {
         if(arr[i] < arr[j])
	 {
	    int tmp = arr[j];
	    arr[j] = arr[i];
	    arr[i] = tmp;
	 }
      }
   }

   for(int i = 0; i < size; i++)
   {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

