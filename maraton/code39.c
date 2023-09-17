#include <stdio.h>

int main()
{
   int x = 0;
   printf("Enter a length: ");
   scanf(" %d", &x);

   if(x > 0){
     for(int i = 1; i <= x; i++)
     {
        for(int j = 1; j <= i; j++)
        {
           printf("* ");
        }
        printf("\n");
     }
   }
   else
   {
      printf("Invalid input\n");
   }
}
