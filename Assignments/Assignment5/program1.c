/*
1. Find the greatest of three Numbers

problem Statement: Accept three integer and determine the greatest number among them.
The program must also work correctly when two or all three numbers are equal.

Ecxpected Output:

Input : 10  50  30  ->  50 is Greatest

Input : 40  40  20  ->  40 is Greatest

Input : 15  55  15  ->  15 is Greatest
*/

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst , int iSecond , int iThird)
{
    if((iFirst > iSecond) || (iFirst > iThird))
    {
        printf("%d,is a greatest",iFirst);
    }
    else if((iSecond > iFirst) || (iSecond > iThird))
    {
        printf("%d,is a greatest",iSecond);
    }
    else
    {
        printf("%d,is a greatest",iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second number\n");
    scanf(" %d",&iValue2);

    printf("Enter third number\n");
    scanf(" %d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}
