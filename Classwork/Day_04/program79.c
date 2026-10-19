//Input: 5
// 1+2+3+4+5 = 15

//Input: 8
// 1+2+3+4+5+6+7+8 = 36

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;
    int iSum = 0;

    iCnt = 1;

    //iSum = 0 + 1;
    iSum = iSum +iCnt;
    iCnt++;  //2
    
    //iSum = 1 + 2;  -> 3
    iSum = iSum +iCnt;
    iCnt++;  //3

    //iSum = 3 + 3;  ->6
    iSum = iSum +iCnt;
    iCnt++;  //4
    
    //iSum = 6 + 4;  ->10
    iSum = iSum +iCnt;
    iCnt++; //5

    printf("%d\n",iSum);   //10

    return EXIT_SUCCESS;
}