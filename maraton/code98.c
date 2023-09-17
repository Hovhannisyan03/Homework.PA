#include <stdio.h>                                    
#include <limits.h>

int main()
{
   const int N = 4;
   const int M = 3;
   int arr[N][M];
   int max = INT_MIN;
   printf("Enter matrix elements(%dx%d)\n", N, M);
   for(int i = 0; i < N; ++i)
   {
      for(int j = 0; j < M; ++j)
      {
         scanf(" %d", &arr[i][j]);
      }
   }
   for(int i = 0; i < N; ++i)
   {
      for(int j = 0; j < M; ++j)
      {
         if(arr[i][j] > max)
	 {
	    max = arr[i][j];
	 }
      }
  }

   printf("Max is %d", max);

}


