#include <iostream> 

int main()
{  
   int num = 0;
   printf("Enter a number: ");
   scanf(" %d", &num);
   int zero = 0;
   int one = 0;
   while(1)
   {
      if(num % 2 == 0)
      {
	 num /= 2;
	 ++zero;
      }
      else if(num == 1)
      {
         ++one;
	 break;
      }
      else if(num % 2 == 1)
      {  --num;
	 num /= 2;
	 ++one;
      }
   }

   printf("Count of zero: %d\nCount of one: %d\n", zero, one);
}
