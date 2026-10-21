/*
4. Check voting Eligibility

Problem Statement :  Accept the age of a person and determin whether the person is eligible to vote.
A person must be at least 18 years old to vote.
A negative age should be considered invalid.

Expected Output:

Input : 21 -> Eligible for Voting

Input : 16 -> Not Eligible for Voting

Input : -5 -> Invalid age
*/

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int i_Age)
{
    if(i_Age < 0)
    {
        printf("Invalid age");
    }
    else if(i_Age >= 18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not Eligible for voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}