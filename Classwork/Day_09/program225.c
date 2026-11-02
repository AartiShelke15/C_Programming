#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[] = {'G','a','n','e','s','h','\0'};

    printf("%s\n",Arr);

    printf("Size of Array is : %d\n",sizeof(Arr));
    
    return EXIT_SUCCESS;
}