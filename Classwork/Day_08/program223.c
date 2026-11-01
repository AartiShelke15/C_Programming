/*
    iRow :  4
    iCol :  4

    #   2   3   4
    1   #   3   4
    1   2   #   4
    1   2   3   #
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)   // Diagonal
            {
                printf("#\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}