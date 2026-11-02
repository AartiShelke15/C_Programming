// a    e   i   o   u

#include<stdio.h>
#include<stdlib.h>

int CountVowelsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') ||
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')
        )
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

    iRet = CountVowelsX(Arr);

    printf("Frequency of vowels is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}