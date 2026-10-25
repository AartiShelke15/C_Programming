// $ $ $ $ $ $
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iNo ; iCnt++)
  {
    printf("$\t");
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter Frequency : \n");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return EXIT_SUCCESS;
}