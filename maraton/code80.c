#include <stdio.h>

int main()
{
   int x = 45;
   double y = 23.1;
   char ch = 'A';
   
   int *xp = &x;
   double *yp = &y;
   char *chp = &ch;

   printf("%p\n%p\n%p\n",xp,yp,chp);
}
