#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int iCount = 0;
    char Arr[20] = "Jay Ganesh";
    char *ptr = NULL;
    
    ptr = &(Arr[0]);

    while (*ptr != '\0') 
    {
        iCount++;
        ptr++;
    }
    printf("Length of string is : %d\n",iCount);
    
    return EXIT_SUCCESS;
}