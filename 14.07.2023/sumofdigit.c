// Գրեք ծրագիր, որն օգտվողին թույլ է տալիս մուտքագրել 12-ից մեծ ամբողջ թիվ և տպել այդ թվի թվանշանների գումարը։

#include <stdio.h>

int main() 
{
   int number = 0;
   int sum = 0;
   printf("Enter a number: ");
   while (1)
   {
      scanf(" %d", &number);
      if(number > 12)
      {
	 while (number != 0)
	 {
	    sum += number % 10;
	    number /= 10;
	 }
	 break;
      }else 
      {
         printf("Invalid input, enter again: ");
      }
   }
   printf("Sum of digit: %d \n", sum);
}
