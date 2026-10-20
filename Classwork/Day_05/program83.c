//problems on Numbers

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // logic
    if((iNo % 3) == 0)
    {
        printf("It is divisible\n");
    }
    else
    {
        printf("It isNot divisible\n");
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
