#include <stdio.h>

int main()
{
   int x = 0, y = 0, z = 0;
   int* xp = &x;
   int* yp = &y;
   int* zp = &z;

   printf("%p\n%p\n%p\n", xp,yp,zp);
}
