#include<stdio.h>
void main()
{
    int tea;
    int candy;
    printf("enter tea and candy price");
    scanf("%d %d",&tea, &candy);
    if (tea<5||candy<5)
    {
        printf("0");
    }
    else if (tea>=2*candy||candy>=2*tea)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
}