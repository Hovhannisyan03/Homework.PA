#include <stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;

   while(1){
   printf("Enter a num1: ");
   scanf(" %d", &num1);
   printf("Enter a num2: ");
   scanf(" %d", &num2);
      if(num1!=0 && num2!=0){
      break;
      }else 
      {
      printf("Invalid input\n");
      }
   }
      if(num1%num2==0 || num2%num1==0)
      {
      printf("True\n");
      }else {
      printf("False\n");
      }
}

