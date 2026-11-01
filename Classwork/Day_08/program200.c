/*
    Input : 4
    Output: A   B   C   D
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Ch = '\0';

    for(Ch = 'A'; Ch <= 'Z'; Ch++)
    {
        printf("%c\n",Ch);
    }

    return EXIT_SUCCESS;
}