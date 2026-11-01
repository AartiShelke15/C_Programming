/*
    Input : 4
    Output: A   B   C   D
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 97; iCnt <= 122; iCnt++)
    {
        printf("%d\t%c\n",iCnt,iCnt);
    }

    return EXIT_SUCCESS;
}