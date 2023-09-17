#include <stdio.h>

char cpy(char *str1, char *str2);

int main()
{  const int size = 11;
   char str1[size] = "dsdaddadad";
   char str2[size];
   cpy(&str1[0],&str2[0]);
   printf("%s\n", str2);
}

char cpy(char *str1, char *str2)
{  int i = 0;

   while(*(str1+i) != '\0')
   {
      *(str2+i) = *(str1+i);
      ++i;
   }

   return *str2;
}
