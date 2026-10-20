#include "Header.h"

///////////////////////////////////////////////////
//
//  Function Name : Even numbers
//  Input         : Interger ,Integer
//  Output        : Interger
//  Description   : accept number from user and print that number os even numbers.
//  Date          : 18/10/2026
//  Author        : Aarti Ramesh Shelke
//
///////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
     
    for (iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        printf("%d ", iCnt * 2);
    }
}