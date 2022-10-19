#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,add,mul,sub,s;
    float div;
    printf("enter the first number:");
    scanf("%d",&x);
    printf("enter the second number:");
    scanf("%d",&n);
    if(x<=0)
    {
        printf("enter the valid input");
    }
    else if (n<=0)
    {
        printf("enter the valid input");
    }
    else
    {
    add=x+n;
    sub=x-n;
    mul=x*n;
    div=x/n;
    s= pow (x,n);
    printf("\naddition is:%d",add);
    printf("\nsubstraction is:%d",sub);
    printf("\nmultiplication is:%d",mul);
    printf("\ndivision is:%0.2f",div);
    printf("\npower is:%d",s);
}
}
