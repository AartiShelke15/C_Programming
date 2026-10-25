#include<stdio.h>
#include<stdlib.h>
  
float AverageDigits(int iNo)
{
  int iDigit = 0, iSum = 0, iCount = 0;
  float fAvg = 0.0f;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iCount++;

    iNo = iNo/10;
  }
  fAvg = (float)iSum / iCount;  // need of typecasting.
  return fAvg;
}

int main()
{
    int ivalue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    fRet = AverageDigits(ivalue);

    printf("Average of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}