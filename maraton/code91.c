#include <stdio.h>

char stchr(char *str, char ch);

int main()
{  const int size = 11;
   char str[size] = "abcdefghjk";
   char ch = 'g';

   int num = stchr(&str[0],ch);
   printf("%d\n", num);
}

char stchr(char *str, char ch)
{  int i = 0;
   int count = 1;

   while(*(str+i) != ch)
   {
      ++count;
      ++i;
   }

   return count;
}
