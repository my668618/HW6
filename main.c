#include <stdio.h>
#include <stdlib.h>

void showLetterGrade(float);


int main()
{
    float score;
    printf("Enter your score: ");
    scanf("%f",&score);

    showLetterGrade(score);

    return 0;
}

void showLetterGrade(float score)
{
    if(score >= 90.0)
    {
        printf("A");
    }
    else if(score >= 80.0)
    {
        printf("B");
    }
    else if(score >= 70.0)
    {
        printf("C");
    }
    else if(score >= 60.0)
    {
        printf("D");
    }
    else if(score < 60.0)
    {
        printf("F");
    }
}
