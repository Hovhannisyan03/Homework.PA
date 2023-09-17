#include <stdio.h>

int main()
{
   int x = 23;
   int y = 19;
   int *xp = &x;
   int *xy = &y;

   printf("%d + %d = %d\n",*xp,*xy,*xp + *xy);
   printf("%d - %d = %d\n",*xp,*xy,*xp - *xy);
}
