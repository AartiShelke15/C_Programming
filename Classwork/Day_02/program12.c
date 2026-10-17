#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter Number : \n");
    if(scanf("%d",&no) != 1)
    {
        fprintf(stderr,"Invalid Input");

        return EXIT_FAILURE;
    }

    printf("Input is valid");
    
    return EXIT_SUCCESS;
}