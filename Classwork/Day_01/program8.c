/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/
///////////////////////////////////////////////////
//
//  Step 1 : Understand the problem statement
//              User is going to enter any 2 integers 
//              and we have to perform addition
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  
//  Step 2 : Write the algorithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perform the addition and store into Ans
        Display the result from Ans
    End
*/         
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//  Step 3 : Decide the programming language
//          We select C programming
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//  Step 4 : Write the program
//
///////////////////////////////////////////////////

#include<stdio.h>

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

int Addition(int iNo1,int iNo2)
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

    return 0;
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