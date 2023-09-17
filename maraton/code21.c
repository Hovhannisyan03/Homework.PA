#include <stdio.h>

int main()
{
   char ch = 0;
   printf("Enter char: ");
   scanf("%c", &ch);
   
   if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
      if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'U' || ch == 'u' || ch == 'O'||  ch == 'o')
      {
         printf("Vowel\n");
      }else 
      {
         printf("Consonant\n");
      }
    else 
    {
      printf("Invalid input\n"); 
    }
}
