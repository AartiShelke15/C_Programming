//Accept number from user and check whether number is even or odd.

#include<stdio.h>

# define true 1
# define false 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("It is a even number");
    }
    else
    {
        printf("It is a odd number");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    return 0;
}