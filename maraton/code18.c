#include <stdio.h>

int main()
{
   bool A;
   bool B;
   A = false;
   B = false;
   printf("A B\n");
   printf("0 0 A B && !(B A) -> %d\n", (A*B & !(B*A)));

   A = true;
   B = false;
   printf("1 0 A B && !(B A) -> %d\n", (A*B & !(B*A)));

   A = false;
   B = true;
   printf("0 1 A B && !(B A) -> %d\n", (A*B & !(B*A)));
  

   A = true;
   B = true;
   printf("1 1 A B && !(B A) -> %d\n", (A*B & !(B*A)));
      
}
