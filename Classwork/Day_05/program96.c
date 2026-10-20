#include<stdio.h>
#include<stdlib.h>

int main()
{ 
    printf("Size of int : %zu\n",sizeof(int));
    printf("Size of char : %zu\n",sizeof(char));
    printf("Size of float : %zu\n",sizeof(float));
    printf("Size of double : %zu\n",sizeof(double));
    printf("Size of short int : %zu\n",sizeof(short int));
    printf("Size of long int : %zu\n",sizeof(long int));
    printf("Size of long double : %zu\n",sizeof(long double));


    return EXIT_SUCCESS;
}