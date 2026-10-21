/*
1. Check whether a number is postive or negative

Problem Statement : Write a C program that accepts an integer from the user and determines whether the entered number is postive,negative,or zero.

Expected Output :

Input : 15 -> Postive Number

Input : -8 -> Negative Number

Input : 0  -> Zero
*/

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("It is a postive number\n");
    }
    else if (iNo < 0)
    {
        printf("It is a negative number\n");
    }
    else
    {
        printf("it is a zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
