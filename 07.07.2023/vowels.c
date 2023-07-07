// 1.Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:

#include <stdio.h>

int main (){
     char letter;
     printf("Enter a letter: ");
     scanf("%c", &letter);

     switch(letter){
     case 'a':
     case 'A':
     case 'e':
     case 'E':
     case 'i':
     case 'I':
     case 'u':
     case 'U':
     case 'o':
     case 'O':
	     printf("The letter is a vowels\n");
	     break;
     default:
	     printf("The letter is a consonants\n");
     }
}


