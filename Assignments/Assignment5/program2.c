/*
2. Check Leap year

problem Statement: Accept a year and determine whether it is a leap year according to Gregorian calendar rules.A year is a leap year if it is divisible by 400,
OR divisible by 4 but not by 100.
Consider years less than or equal to zero invalid.

Expected Output :

Input : 2024    -> Leap year

Input : 1900    -> Not a Leap year

Input : 2000    -> Leap year
*/

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int lyear)
{

    if((lyear % 400)== 0)
    {
        printf("%d,is a leap year",lyear);
    }
    else if((lyear % 100)== 0)
    {
        printf("%d,is not  leap year",lyear);
    }
    else if((lyear % 4) == 0)
    {
        printf("%d, is a leap year",lyear);
    }
    else
    {
        printf("%d,is not a leap year",lyear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter a year: \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}