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

int main()
{
    int ivalue = 0 , iSum = 0 , iCount = 0;
    float fAvg = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    iSum = SumDigits(ivalue);
    iCount = CountDigits(ivalue);

    fAvg = (float)iSum / iCount;  

    printf("Number of digits : %d\n",iCount);
    printf("Summation of digits : %d\n",iSum);
    printf("Average of digits : %.2f\n",fAvg);

    return EXIT_SUCCESS;
}