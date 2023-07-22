//  Գրեք ծրագիր, որը էկրանին տպում է ‘*’ սիմվոլների միջոցով քառակուսու պատկերը։ Քառակուսու կողի երկարությունը  մուտքագրվում է օգտվողի կողմից։ 

#include <stdio.h>

int main()
{
   int len = 0;
   printf("Enter the square length: ");
   scanf(" %d", &len);

   if(len <=0)
   {
      printf("Invalid input\n");
   }
   else 
   {
      for(int i = 0; i < len; i++)
      {
         for(int j = 0; j < len; j++)
	 {
	    if(i == 0 || i == len-1)
	    {
	       printf("* ");
	    }
	    else if((i > 0 || i < len-1) && (j == 0 || j == len-1))
	    {
	       printf("* ");
	    }
	    else 
	    {
	       printf("  ");
	    }
	 }
	 printf("\n");
      }
   }
}
