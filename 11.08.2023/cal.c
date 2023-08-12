#include <stdio.h>

void cal (float num1, float num2);

int main () 
{
   float num1 = 0;
   float num2 = 0;
   char process = 0;
   while(1){
   printf("Enter num1: ");
   scanf(" %f", &num1);
   printf("Enter num2: ");
   scanf(" %f", &num2);
   cal(num1,num2);
   printf("Continue? (Q=No, Y=Yes)");
   scanf(" %c", &process);
      if (process == 'Q')
      {
         break;
      }
   }
}
void cal(float num1, float num2){
   char op = 0;
   printf("Enter the operator(+,-,/,*):");
   scanf(" %c", &op);
   switch(op)
   {
      case '+':
         float sum = num1 + num2;
         printf("Sum = %f\n", sum);
         break;
      case '-':
         float sub = num1 - num2;
         printf("Sub = %f\n", sub);
         break;
      case '/':
         if (num2 != 0){
         float div = num1 / num2;
         printf("Div = %f\n", div);
         }else {
         printf("Invalid input\n");
         }
         break;
      case '*':
         float mul = num1 * num2;
         printf("Mul = %f\n", mul);
         break;
   }
}

