#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0xAD56;
    int No2 = 0xFD77;

    int Ans = 0;

    //Ans = No1 & No2;

    Ans = No1 | No2;

    printf("%d\n",Ans);

    return EXIT_SUCCESS;
}