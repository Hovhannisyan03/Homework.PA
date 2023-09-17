#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{  
   char str[] = "CheeseBurger";
   char min = CHAR_MAX;
   char max = CHAR_MIN;
   int vowel = 0;
   for(int i = 0; i < strlen(str); ++i)
   {
      if(str[i] < min)
      {
         min = str[i];
      }
      if(str[i] > max)
      {
         max = str[i];
      }
      if(str[i] == 'a' || str[i] == 'A' ||str[i] == 'e' ||str[i] == 'E' ||str[i] == 'i' ||str[i] == 'I' ||str[i] == 'u' ||str[i] == 'U' ||str[i] == 'o' ||str[i] == 'O')
      {
         ++vowel;
      }
   }

   printf("ASCII min: %d\nASCII max:%d\nVowel: %d\n", min, max, vowel);

   for(int i = strlen(str)-1; i >= 0; --i)
   {
      printf("%c", str[i]);
   }
   
   int j = 1;
   for(int i = 0; i < strlen(str)/2; ++i)
   {
      char temp = str[i];
      str[i] = str[strlen(str)-j];
      str[strlen(str)-j] = str[i];
      ++j;
   }
   printf("\nUpper: ");

   for(int i = 0; i < strlen(str); ++i)
   {
      if(str[i] >= 'a' && str[i] <= 'z')
      {
         str[i] -= 32;
	 printf("%c",str[i]);
      }
      else
      {
         printf("%c", str[i]); 
      }
   }

 
}
