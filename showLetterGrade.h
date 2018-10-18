#ifndef SHOWLETTERGRADE_H_INCLUDED
#define SHOWLETTERGRADE_H_INCLUDED

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


#endif // SHOWLETTERGRADE_H_INCLUDED
