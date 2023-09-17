#include <stdio.h>
#include <string.h>

int main()
{
   char str[20];
   printf("Enter char array(20sym): ");
   scanf(" %s", str);
   const int size = strlen(str);
   for(int i = size; i >= 0; --i)
   {
      printf("%c", str[i]);
   }

}
