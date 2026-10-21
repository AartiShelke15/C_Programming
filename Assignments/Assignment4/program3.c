/*
3. Find the Greater of two numbers

Problem Statement : Accept two integers and determine which number is greater. if both numbers are equal, display an appropriate message.

Expected Output:

input: 10   20  -> 20 is Greater

input: 50   30  -> 50 is Greater

input: 15   25  -> Both Numbers are Equal.
*/

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst , int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d, is a greater NUmber",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d, is a greater NUmber",iSecond);
    }
    else
    {
        printf("Both number are equal");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}