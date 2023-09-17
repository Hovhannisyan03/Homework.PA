#include <stdio.h>

int main()
{
   float x = 0;
   printf("Enetr celsius: ");
   scanf(" %f", &x);

   float far = (x * 9/5) + 32;
   printf(" %f", far);
}
