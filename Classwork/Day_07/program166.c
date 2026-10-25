#include<stdio.h>
#include<stdlib.h>

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
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    iRet = SumDigits(ivalue);

    printf("Summation os Digits : %d\n",iRet);

    return EXIT_SUCCESS;
}