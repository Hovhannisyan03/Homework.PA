#include <stdio.h>

int main()
{
   int row = 0;
   printf("Enter row: ");
   scanf(" %d", &row);
   
   if(row > 0){
      for(int i = 1; i <= row; ++i)
      {
	 for(int j = 0; j < i; j++)
	 {
	    printf("%d", i);
	 }
	 printf("\n");
      } 
   }
   else
   {
      printf("Invalid input\n");
   }
}
