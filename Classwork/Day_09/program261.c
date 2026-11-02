#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0 , iCountCapital = 0, iCountDigit = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }

        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }

        else     //Issue
        {
            iCountDigit++;
        }
        str++;
    }
    printf("Number of capital letter : %d\n",iCountCapital);
    printf("Number of small letter : %d\n",iCountSmall);
    printf("Number of digits : %d\n",iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}