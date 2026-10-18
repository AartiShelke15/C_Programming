#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns = 0.0f;
    //Typecasting
    fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3)/3;
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , iValue3 = 0;
    float fResult = 0.0f;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    fResult = Average(iValue1,iValue2, iValue3);
    
    printf("Average is : %f\n",fResult);

    return EXIT_SUCCESS;
}