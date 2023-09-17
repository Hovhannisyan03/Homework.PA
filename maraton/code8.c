#include <iostream>

int main()
{
    int x = 0;
    int y = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
    if(y != 0){
       printf("%d", x*y+21+x/y-200);
    }
    else 
    {
       printf("Invalid input");
    }

}
