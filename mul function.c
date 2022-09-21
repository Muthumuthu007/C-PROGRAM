#include<stdio.h>
int main()
{
    int mul(int,int);
    int x,n;
    printf("enter the numbers:");
    scanf("%d%d",&x,&n);
    printf("mul=%d",mul(x,n));
    return 0;
}
int mul(int x,int n)
{
    return(x*n);
}

