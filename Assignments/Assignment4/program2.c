/*
2. Check Even or odd number

problem Statement : Accept an interger from the user and determine wherther it is even or odd. An even number is completetely divisible by 2.

Expected Output : 

Input : 24 -> Even Number

Input : 17 -> odd Number
*/

#include<stdio.h>
#include<stdlib.h>

void ChecEvenOdd(int iNo)
{
    if((iNo % 2)== 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    ChecEvenOdd(iValue);

    return EXIT_SUCCESS;
}