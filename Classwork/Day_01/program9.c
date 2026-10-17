#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Interger ,Integer
//  Output        : Interger
//  Description   : Performs addition
//  Date          : 04/10/2026
//  Author        : Aarti Ramesh Shelke
//
///////////////////////////////////////////////////

int Addition(
                int iNo1, //First input
                int iNo2  //Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;   //Business logic

    return iAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);
    
    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//   Step 5 : Test the program
//   Tested test Cases
//-----------------------------------------------------------------
//      Input1      Input2      Output
//-----------------------------------------------------------------
//      10            11          21
//      11             0          11
//      0             11          11
//      20            -9          11
//      -9            20          11
//      -20          -11          -31  
///////////////////////////////////////////////////