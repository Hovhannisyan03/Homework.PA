#include <stdio.h>

int main()
{
   int num = 0;
   int shift = 0;
   printf("Enter a number: ");
   scanf(" %d", &num);
   printf("Enter a numebr of bit shifts: ");
   scanf(" %d", &shift);

   printf("%d >> %d = %d\n", num, shift, num >> shift);
}
