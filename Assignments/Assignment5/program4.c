/*
4.Check Divisibility by 3 and 5

problem Statement : accept an integer and determine whether it is divisible by both 3 and 5,only 3,only 5, or neither.

Expected output :

Input : 15 -> Divisible by Both

Input : 9 -> Divisible by 3 only

Input : 10 -> Divisible by 5 only

Input : 7 -> Not Divisible by either

*/

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int jValue)
{
    if((jValue % 3) == 0 && (jValue % 5) == 0)
    {
        printf("It is divisible by 3 and 5");
    }
    else if (jValue %3 == 0)
    {
        printf("It is divisible by 3");
    }
    else if (jValue % 5 == 0)
    {
        printf("It is divisible by 5");
    }
    else
    {
        printf("It is not divisible by 3 and 5");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}