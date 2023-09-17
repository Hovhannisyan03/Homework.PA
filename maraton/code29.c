#include <stdio.h>

int main()
{
   char ch1 = 0;
   char ch2 = 0;
   printf("Enter char1: ");
   scanf(" %c", &ch1);
   printf("Enter char2: ");
   scanf(" %c", &ch2);

   if(ch1 + 32 == ch2 || ch1 - 32 == ch2)
   {
      printf("True\n");
   }
   else
   {
      printf("False\n");
   }
}
