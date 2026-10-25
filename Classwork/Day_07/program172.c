#include<stdio.h>
#include<stdlib.h>

float CountDigits(int iNo)
{
  int iDigit = 0;
  int iCount = 0;

  if(iNo > 0)
  {
    iNo = -iNo;
  }
  
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo/10;
    iCount++;
  }
  return iCount;
}

int SumDigits(int iNo)
{
  int iDigit = 0;
  int iSum = 0;

  if(iNo < 0)  //updater
  {
    iNo = -iNo;
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iNo = iNo /10;
  }  
  return iSum;
}

float AverageDigits(int iNo)
{
  int iDigit = 0, iSum = 0, iCount = 0;
  float fAvg = 0.0f;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  iSum =SumDigits(iNo);
  iCount = CountDigits(iNo);

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

    printf("Average of Digits : %.2f\n",fRet);

    return EXIT_SUCCESS;
}