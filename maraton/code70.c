#include <stdio.h> //teri
#include <string.h>

int main()
{
   char str[] = "Hello World";
   int size = 0;
   int i = 0;
   int oIndex = 0;
   while(str[i] != '\0')
   {
      size++;
      ++i;
   }
   i = 0;
   printf("Size = %d\n", size);


   while(str[i] != '\0')
   {
      if(str[i] == 'o')
      {
         oIndex = i;
	 break;
      }
      ++i;
   }
   i = 0;
   printf("oIndex = %d\n", oIndex);


   while(str[i] != '\0')
   {
      if(str[i] == 'l')
      {
         str[i] = 'z';
      }
      ++i;
   }
   i = 0;

   while(str[i] != '\0')
   {
      if(str[i] >= 'a' && str[i] <= 'z')
      {
         str[i] -= 32;
      }
      printf("%c", str[i]);
      ++i;
   }
   i = 0;

   int spaceCount = 0;
   while(str[i] != '\0')
   {
      if(str[i] == ' ')
      {
         ++spaceCount;
      }
   }
   printf("\nSpaceCount = %d\n", spaceCount);

   int last_Oindex;
   for(int i = oIndex; i < size; ++i)
   {
      if(str[i] == 'o')
      {
         last_Oindex = i;
      }
   }
   char str1[] = "World";
   printf("LastOindex = %d\n", last_Oindex);
   printf("%s\n", strstr(str,str1));
    
   i = 0;
   while(str[i] != '\0')
   {
      if(str[i] == '@')
      {
         printf("True\n");
      }
      else 
      {
         printf("False\n");
      }
      ++i;
   } 


   int s1 = (size-1)/2;
   int s2 = (size-1)/2;
   char word1[s1];
   char word2[s2];
   for(int i = 1; i <= (size-1)/2; ++i)
   {
      word1[i] = str[i];
   }
   int in = 0;
   for(int i = ((size-1)/2)+1; i <= size; ++i)
   {
      word2[in] = str[i];
      ++in;
   }

   printf("%s\n%s\n", word1, word2);
   
   for(int i = 0; i < size; ++i)
   {
      str[i] += 3;
   }


   int upper = 0;
   for(int i = 0; i < size; ++i)
   {
      if(str[i] >= 'A' && str[i] <= 'Z')
      {
         ++upper;
      }
   }
   printf("%d\n", upper);
   
   for(int i = 0; i < size; ++i)
   {
      if(str[i] == 'l' && str[i+1] == 'l')
      {
         str[i] = 'r';
	 str[i+1] = 'r';
      }
   }

}
