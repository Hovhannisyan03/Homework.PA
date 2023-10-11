#include <stdio.h>

char arr_xo[3][3] = {'1', '2', '3', '4', '5', '6','7', '8', '9'};

void tictac();

int check();

void update(char sign,int value);

int main()
{  
   int player = 1;
   char sign = 0;
   int count = 0;
   int value = 0;
   const int size = 9;
   int input_Value[size];
   int index = 0;

   tictac();
   printf("\nPlayer1 sign[x]\n===============\nPlayer2 sign[o]\n");
   do
   {  
      player = (player % 2 == 1) ? 1 : 2;
      int count1 = 0;
      printf("\nPlayer%d enter a digit(1 - 9): ", player); 
      do
      {  
         count1 = 0;
	 int count2 = 0;
	 do{
            if(count2 > 0)
	    {
	       printf("Enter a digit between 1 and 9: ");
	    } 
            scanf(" %d", &value);
	    ++count2;
	 } while(value < 1 || value > 9);
         
         input_Value[index] = value;

         for(int i = 0; i < index; ++i)
         {
            if(input_Value[i] == value)
	    {
	       ++count1;
	    }
         }

	 if(count1 > 0)
	 {
	    printf("That number has already been used, enter again: ");
	 }
      } while(count1 != 0);
         ++index;
         sign = (player == 1) ? 'X' : 'O';
	 if(count < 4){
            update(sign, value);
	    tictac();
	 }
	 else 
	 { 
            update(sign, value);
	    tictac();
	    if(check() == 1) 
	    {
	       printf("===============\n= Player%d won =\n===============\n", player);
	       return 0;
	    }
	 }
	 ++player; 
	 ++count;
   } while(count != 9);

   printf("=================\n= Nobody is won =\n=================\n");

   return 0;
}

void tictac()
{
   for (int i = 0; i < 3; ++i)
   {
      for(int j = 0; j < 3; ++j)
      {  
	 if(j == 2){
            printf(" %c ", arr_xo[i][j]);
	 }
	 else
	 {
	   printf(" %c |", arr_xo[i][j]);
	 }
      }
      printf("\n----------\n");
   }
}

int check()
{
   if(arr_xo[0][0] == arr_xo[0][1] && arr_xo[0][1] == arr_xo[0][2])
   {
      return 1;
   }
   else if(arr_xo[1][0] == arr_xo[1][1] && arr_xo[1][1] == arr_xo[1][2])
   {
     return 1;
   }
   else if(arr_xo[2][0] == arr_xo[2][1] && arr_xo[2][1] == arr_xo[2][2])
   {
      return 1;
   }
   else if(arr_xo[0][0] == arr_xo[1][1] && arr_xo[1][1] == arr_xo[2][2])
   {
      return 1;
   }
   else if(arr_xo[0][2] == arr_xo[1][1] && arr_xo[1][1] == arr_xo[2][0])
   {
      return 1;
   }
   else if(arr_xo[0][0] == arr_xo[1][0] && arr_xo[1][0] == arr_xo[2][0])
   {
      return 1;
   }
   else if(arr_xo[0][1] == arr_xo[1][1] && arr_xo[1][1] == arr_xo[2][1])
   {
      return 1;
   }
   else if(arr_xo[0][2] == arr_xo[1][2] && arr_xo[1][2] == arr_xo[2][2])
   {
      return 1;
   }
   else 
   {
      return 0;
   }
}

void update(char sign, int value)
{
   if(value <= 3)
   {
      arr_xo[0][value-1] = sign;
   }
   else if(value > 3 && value <= 6) 
   {
      arr_xo[1][value - 4] = sign;
   }
   else
   {
      arr_xo[2][value - 7] = sign;
   }
}
