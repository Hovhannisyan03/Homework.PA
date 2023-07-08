#include <stdio.h>

int main ()
{
     char sym;
     int i = 1;
     printf("Enter a uppercase:");
     while(i){
     	scanf("%c", &sym);
	if(sym >= 65 && sym <= 90)
	{  sym += 32;
	   printf("%c \n", sym); 
	   break;
	}else 
	{
	   printf("Invalid input:");
	}
     }
     return 0;

}

