#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,c;
    printf("enter the number");
    scanf("%d",&n);
    s= pow (n,2);
    c= pow (n,3);
    printf("\nthe square of given number is:%d",s);
    printf("\nthe cube of given number is:%d",c);
    return 0;
}
