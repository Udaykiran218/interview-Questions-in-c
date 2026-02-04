#include<stdio.h>
void main()
{
    int size;
    printf("enter the array size:\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("enter the %d elements \n",(i+1));
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<=size-1;i++)
    {
        sum=sum+a[i];
    }
   printf("the sum is %d ",sum);
   for( int i=0;i<=size-1;i++)
   {
    if (sum%a[i]==0)
    {
    printf("the %d is factor \n",a[i]);
    }
   }

}