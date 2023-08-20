//Գրեք ծրագիր, որտեղ ցուցիչի մեջ պահված կլինի զանգվածի առաջին էլեմենտի հասցեն: Ցուցիչի օգնությամբ տպել զանգվածի տարրերը էկրանին։

#include <stdio.h>

int main()
{
   int arr[] = {4, 2, 3, 7, 9};
   int size = sizeof(arr)/sizeof(arr[0]);
   int *ptr = arr;
   for (int i = 0; i < size; i++)
   {
      printf("%d ", *(ptr + i));
   }
   printf("\n");
}

