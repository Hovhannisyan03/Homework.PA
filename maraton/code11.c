#include <iostream>
#include <string.h>

int main()
{   const int size = 20;
    char sym[size];
    printf("Enter text: ");
    scanf("%s", sym);
    int count = 0;
    int count2 = 0;    
    for(int i = 0; i < strlen(sym); ++i){
       if(sym[i] == 'A' || sym[i] == 'a' || sym[i] == 'E' || sym[i] == 'e' || sym[i] == 'I' || sym[i] == 'i' || sym[i] == 'U' || sym[i] == 'u' || sym[i] == 'O'||  sym[i] == 'o')
       {
          count++;
       }
       else 
       {
          count2++;
       }
    }

    printf("Vowel = %d\nConsonant = %d\n", count, count2);
}
