// Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ 
// Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:

#include <stdio.h>

int main (){
    char sym;
    printf("Enter a symbol: ");
    scanf("%c", &sym);
  
    if(sym >= 48 && sym <= 57)
    {
         printf("True\n");
    } else
    {
         printf("False\n");
    }
}
