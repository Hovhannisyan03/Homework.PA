// Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը։

#include <stdio.h>
#include <limits.h>
int main ()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    while (1)
    {
        printf("Enter a num1: ");
        scanf("%d", &num1);
        printf("Enter a num2: ");
        scanf("%d", &num2);
        printf("Enter a num 3: ");
        scanf("%d", &num3);

        if(num1 == num2 || num1 == num3 || num2 == num3)
        {
            int maxNumber = INT_MIN;
            const int size = 3;
            int arr[size];
            arr[0] = num1;
            arr[1] = num2;
            arr[2] = num3;
            for (int i = 0; i < size; i++)
            {
                if(maxNumber < arr[i])
                {
                    maxNumber = arr[i];
                }
            }
            printf("The biggest number is %d", maxNumber);
        }else 
        {
            printf("Here are no equal numbers");
        }
        break;
    }
    return 0;
}
