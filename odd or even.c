#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("enter a valid input");
    }
   else if(n%2==0)
    {
        printf("\nthe given number is even");
    }
        else
        {
            printf("\nthe given number odd");
        }
        return 0;
    }

