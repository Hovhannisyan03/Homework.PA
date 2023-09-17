#include <stdio.h>

void swap(int *num1, int *num2);

int main()
{
   int x = 45;
   int y = 34;
   printf("Before swap x = %d y = %d\n", x,y);
   swap(&x,&y);
}

void swap(int *num1, int *num2)
{
   int temp = *num1;
   *num1 = *num2;
   *num2 = temp;
   printf("After swap x = %d y = %d\n", *num1, *num2);
}
