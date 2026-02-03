#include<stdio.h>
void main()
{
int big;
int small;
int goal;
printf("enter the no of big bricks,small bricks,goal");
scanf("%d %d %d",&big,&small,&goal);
int required=goal/5;
if (required<=big)
{
    int rem =goal-(required*5);
    if(rem<=small)
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
    int rem=goal-(big*5);
    if(rem<=small)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
}