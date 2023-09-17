#include <stdio.h>

int main()
{
    int num = 0;
    do{
       printf("Enter num: ");
       scanf(" %d", &num);
    }while(num < 0);

    if(num <= 1)
    {
       if(num == 0)
       {
          printf("%d", num); 
       }else if(num == 1)
       {
          printf("%d %d\n", num-1, num);
       }
    }
    else
    {  int num1 = 0;
       int num2 = 1;

       printf("0 ");

       for (int i = 1; i <= num; ++i)  
       {     
	      
     	  int fib = num1 + num2;
     	  num1 = num2;
	  num2 = fib;
          printf("%d ", fib);  
       }
       
    }
    
}
