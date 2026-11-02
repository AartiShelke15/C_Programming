#include<stdio.h>
#include<stdlib.h>

int CountX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a'))
        {
            iCount++;
        }
        str++;
    } 
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountX(Arr);

    printf("Frequency of a is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}