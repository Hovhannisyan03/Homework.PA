// Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թիվ, եթե թվի հինգերորդ բիթը եղավ 0 սարքում է մեկ և տպում էկրանին հակառակ դեպքում թիվը պարզապես տպել էկրանին։

#include <stdio.h>

int main()
{
   int number = 0;
   printf("Enter a number: ");
   scanf(" %d", &number);

   if(number >= 0 && number <= 15)
   {  printf("5th bit is 0\n");
      printf("The numer is %d\n", number+16);
   }
   else if(number < -16)
   {
      printf("5th bit is 0\n");
      printf("The number is %d\n", number+16);
   }else 
   { 
      printf("5ts bit is 1\n");
      printf("The number is %d\n", number);
   }
}
