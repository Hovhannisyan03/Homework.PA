//Գրեք ծրագիր, որը էկրանին տպում է ‘*’ սիմվոլների միջոցով հավասարասրուն ուղանկյուն եռանկյան պատկերը։ 
//Եռանկյան սրունքի երկարությունը մուտքագրվում է օգտվողի կողմից։ Ծրագիրը գրելուց օգտվեք ցիկլերից։ 
#include <stdio.h>

int main()
{
   int length = 0;
   printf("Enter length: ");
   scanf(" %d", &length);
   for(int i = 0; i < length; i++)
   {
      for(int j = 0; j <=i; j++)
      {
         printf("* ");   
      } 
      printf("\n");
   }
}
