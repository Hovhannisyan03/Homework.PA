#include <stdio.h>
#include <string.h>

int main()
{  const int size = 7;
   int count = 0;
   char arr[size];
   printf("Enter array char(%d)", size);
   for (int i = 0; i < size; i++)
   {
      scanf(" %c", &arr[i]);
   }
   for(int i = 0; i < size; i++)
   {
     if (arr[i] == ' ')
     {
        count++;
     }
   }
   char arr2[size-count];
   int j = 0;
   for (int i = 0; i < size; i++)
   {
      if(arr[i] != ' ')
      {
         arr2[j] = arr[i];
         j++;
      }
   }
   for (int i = 0; i < size-count; i++)
   {
      printf("%c",arr2[i]);
   }  
   printf("\n");
}

