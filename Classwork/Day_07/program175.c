#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{
  int iDigit = 0 , iRev = 0;

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;
    iNo = iNo/ 10;
  }
  return iRev;
}
int main()
{
  int ivalue = 0;
  int iRet = 0;

  printf("Enter number : \n");
  scanf("%d",&ivalue);
  
  iRet = Reverse(ivalue);

  printf("Reverse number is :%d\n",iRet);

  return EXIT_SUCCESS;
}