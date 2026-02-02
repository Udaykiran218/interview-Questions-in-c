#include<stdio.h>
void main()
{
    int uid =5371;
    int upwd=9647;
    int id;
    int pwd;
    printf("enter the user is\n");
    scanf("%d",&id);
    printf("enter the user password\n");
    scanf("%d",&pwd);
    if (uid==id)
    {
        if (upwd=pwd)
        {
            printf("login is sucessful\n");
        }
        else
        {
            printf("incorrect pwd\n");
        }
    }
    else
    {
        printf("incorrect user id \n");
    }
}