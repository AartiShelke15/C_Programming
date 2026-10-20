//problems on Numbers

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if((iNo % 5) == 0)    // if(((iNo % 5) == 0) && ((iNo % 3) == 0))
    {
        printf("It is divisible by 5\n");
    }
    else if ((iNo % 3) == 0)
    {
        printf("It is divisible by 3\n");
    }
    else
    {
        printf("It is Not divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}