#include <stdio.h>
#include <string.h>

int main()
{
   const int size = 20;
   char arr[size];
   printf("Enter word: ");
   scanf("%s", arr);
   int count = 0;
   int j = 1;
   for(int i = 0; i < strlen(arr)/2; ++i)
   {
      if(arr[i] == arr[strlen(arr)-j])
      {
         count++;
      }
   }

   if(count == strlen(arr)/2)
   {
      printf("True");
   }else 
   {
      printf("False");
   }
}
