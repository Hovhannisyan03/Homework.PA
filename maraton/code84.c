#include <stdio.h>

int main()
{  const int size = 7;
   int arr[size];
   int *arrP = arr;
   for(int i = 0; i < size; ++i)
   {
      scanf(" %d", arrP+i);
      printf("%d ", *(arrP+i));
   }
}
