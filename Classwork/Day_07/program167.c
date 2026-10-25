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
    iCount++;

    iNo = iNo/10;
  }
  return iCount;
}
int main()
{
    int ivalue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    fRet = CountDigits(ivalue);

    printf("Number of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}