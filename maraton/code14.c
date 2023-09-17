#include <stdio.h>

int main()
{
   int age = 0;
   printf("Enter age: ");
   scanf(" %d", &age);
   
   if(age >= 0){
      if(age < 18)
      {
         printf("Duq anchapahas eq\n");
      }else if(age >= 18 && age <= 65)
      {
         printf("Duq chapahas eq\n");
      }else 
      {
         printf("Du tarec qaxaqaci es\n");
      }
   }
   else
   {
      printf("Invalid input\n");
   } 
}
