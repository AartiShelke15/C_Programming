/*
3. Calculate Student Grade

Problem Statement : Accept the marks of a student out of 100 and display the grade according to the folling criteria.
Marks outside 0-100 are invalid.

-------------------------------------------------------------------------
Marks           Grade
----------------------------
90-100            A
75-89             B
60-74             C
40-59             D
Below 40         Fail
-------------------------------------------------------------------------

Expected Output :

Input : 85 -> Grade B

Input : 35 -> Fail

Input : 105 -> Invalid Marks
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float ffMarks)
{
    if(ffMarks < 0 || ffMarks > 100)
    {
        printf(" %f, is invalid marks",ffMarks);
    }
    else if (ffMarks >= 90 && ffMarks <= 100) 
    {
        printf("Grade A");
    }
    else if (ffMarks >= 75 && ffMarks <= 89) 
    {
        printf("Grade B");
    }
    else if (ffMarks >= 60 && ffMarks <= 74) 
    {
        printf("Grade C");
    }
    else if (ffMarks >= 40 && ffMarks <= 59) 
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}