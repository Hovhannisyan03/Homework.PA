#include <stdio.h>
#include <limits.h>


int main ()
{   const int size = 4;
    int arr[size];
    int sum = 0;  
    int min = INT_MAX; 
    printf("Enter a numbers: ");   
    for (int i = 0; i<size;i++)
    {
    	scanf(" %d", &arr[i]);
	sum += arr[i];
    }

    if(sum==0)
    {
       for(int i=0; i<size; i++)
       {
          if(min > arr[i])
	  {
	     min = arr[i];
	  }
       }
       printf("Min%d \n:", min);
    } else {
       printf("The sum of array are not 0\n");
    }
    

}
