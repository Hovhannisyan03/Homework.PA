#include <stdio.h>

int main()
{
    char arr[] = "ASDKNASDNLKADN";
    
    int size = 0;
    int i = 0;
    while(arr[i] != '\0')
    {
       ++size;
       ++i;   
    }

    printf("Size: %d\n", size);
}
