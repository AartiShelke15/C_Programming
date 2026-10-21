/*
2. Check Divisibility by 5

problem Statement : Accept an integer and determine wherther it is divisible by 5 without leaving any remainder.

Expected Output : 

Input : 45 -> Divisible by 5

Input : 23 -> Not divisible by 5
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if((iNo % 5)== 0)
    {
        printf("It is divisible by 5\n");
    }
    else
    {
        printf("It is not divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}