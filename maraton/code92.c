#include <stdio.h>

char stcpy(char *str1, char *str2);

int main()
{  const int size = 11;
   char str1[size] = "abcdefghjk";
   char str2[size] = "sdsandsada";
   char cpy[size + size];
   cpy[2*size-1] = stcpy(&str1[0],&str2[0]);
   printf("%s\n", cpy);
}

char stcpy(char *str1, char *str2)
{  int i = 0;
   int index = 0;
   char cpy[sizeof(*str1)+sizeof(*str2)];

   while(*(str2+i) != '\0')
   {  cpy[index] = *(str2+i);
      ++index;
      ++i;
   }
   i = 0;

   while(*(str1+i) != '\0')
   {
     cpy[index] = *(str1+i);
     ++index;
     ++i;
   }

   return *cpy;
}
