// *  * * * *
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iNo ; iCnt++)
  {
    printf("*\t");
  }
  printf("\n");
}

int main()
{
  Pattern(7);
  
  return EXIT_SUCCESS;
}