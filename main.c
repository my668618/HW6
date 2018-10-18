#include <stdio.h>
#include <stdlib.h>
#include "showLetterGrade.h"

void showLetterGrade(float);

int main()
{
    float score;
    printf("Enter your score: ");
    scanf("%f",&score);

    showLetterGrade(score);

    return 0;
}
