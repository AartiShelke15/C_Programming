// Accept number from user and check wherther number is even or odd.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    if((iValue %2) == 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number\n");
    }

    return EXIT_SUCCESS;
}