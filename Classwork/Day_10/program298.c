#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned No = 14;
    unsigned Ans = 0;

    Ans = ~ No;

    printf("%u\n",Ans);  // 4294967281

    return EXIT_SUCCESS;
}