#include<stdio.h>
void main ()
{
    int cigar;
    int weekend;
    printf("enter no of cigars");
    scanf("%d",&cigar);
    printf("enter 1 if weekend\t, 0 if not weekend");
    scanf("%d",&weekend);
    if (weekend==1)
    {
        if (cigar>=40)
        {
            printf("true");
        }
        else 
        {
            printf("false");
        }
    }
    else 
    {
        if (cigar>=40&&cigar<=60)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
}