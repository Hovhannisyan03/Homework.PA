#include <stdio.h>

int main()
{
   int x = 0;
   double y = 0;
   char ch = 0;
   int *ptr = &x;
   double *ptr1 = &y;
   char *ptr2 = &ch;
   *ptr = 4;
   *ptr1 = 2.3;
   *ptr2 = 'r';
   printf("%p\n%p\n%p\n", ptr, ptr1, ptr2);  
}
