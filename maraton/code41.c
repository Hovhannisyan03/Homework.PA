#include <stdio.h>

int main()
{
   int num1 = 0;
   int num2 = 0;
   char op = 0;
   
   while(1)
   {
      printf("Enter num1: ");
      scanf(" %d", &num1);
      printf("Enter num2: ");
      scanf(" %d", &num2);
      printf("Enter operator(+ - / *): ");
      scanf(" %c", &op);
      
      if(op == '+')
      {
         printf("Sum = %d\n", num1 + num2);
      }
      else if(op == '-')
      {
         printf("Sub = %d\n", num1 - num2);
      }
      else if(op == '*')
      {
         printf("Mul = %d\n", num1 * num2);
      }
      else if(op == '/')
      {  if(num2 != 0)
	 {
            printf("Div = %d\n", num1 / num2);
	 }else 
	 {
	    printf("Invalid input\n");
	 }
      }else 
      {
         printf("Invalid operator\n");
      }

      char op1 = 0;
      printf("Continue (Q = Exit) ");
      scanf(" %c", &op1);
      if(op1 == 'Q')
      {
         break;
      }

   }
}
