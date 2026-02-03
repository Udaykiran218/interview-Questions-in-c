#include<stdio.h>
void main()
{
int big;
int small;
int goal;
printf("enter the no of big bars,small bars,goal");
scanf("%d %d %d",&big,&small,&goal);
int required=goal/5;
if (required<=big)
{
    int rem =goal-(required*5);
    if(rem<=small)
    {
        printf("%d",rem);
    }
    else
    {
        printf("-1");
    }
}
else
{
    int rem=goal-(big*5);
    if(rem<=small)
    {
        printf("%d",rem);
    }
    else
    {
        printf("-1");
    }
}
}