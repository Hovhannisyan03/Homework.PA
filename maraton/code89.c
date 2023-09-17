#include <stdio.h>

void len(char *str);

int main()
{
   char str[] = "dsdaddadad";
   len(&str[0]);
}

void len(char *str)
{  int i = 0;
   int count = 0;

   while(*(str+i) != '\0')
   {
      ++count;
      ++i;
   }

   printf("%d", count);
}
