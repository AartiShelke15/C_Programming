#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Jay Ganesh";
    char *ptr = NULL;

    ptr = &(Arr[0]);

    while (*ptr != '\0') 
    {
        printf("%c\n",*ptr);
        ptr++;
    }

    return EXIT_SUCCESS;
}