#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[100];

    Arr[0] = 'G';
    Arr[1] = 'a';
    Arr[2] = 'n';
    Arr[3] = 'e';
    Arr[4] = 's';
    Arr[5] = 'h';
    Arr[6] = '\0';
    
    printf("%s\n",Arr);
    
    printf("Size of Array is : %d\n",sizeof(Arr));

    return EXIT_SUCCESS;
}