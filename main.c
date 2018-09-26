#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d",&score);
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
    //printf("Hello world!\n");
    return 0;
}
