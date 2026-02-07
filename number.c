#include <stdio.h>
void main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d is +ve number \n", a);
    }
    else if(a<0)
    {
        printf("%d is -ve number \n",a);
    }
    else
    {
        printf("%d is zero \n");
    }
}