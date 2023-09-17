#include <stdio.h>                                    
#include <limits.h>

int main()
{
   const int N = 4;
   const int M = 3;
   int arr[N][M];
   int min = INT_MAX;
   int minIndex1 = 0;
   int minIndex2 = 0;
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
         if(arr[i][j] < min)
	 {
	    min = arr[i][j];
	    minIndex1 = i;
	    minIndex2 = j;
	 }
      }
  }

   printf("%d %d\n", minIndex1, minIndex2);

}


