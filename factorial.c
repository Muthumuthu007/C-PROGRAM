#include<stdio.h>

int main(){

    int x,integer,fact=1,n;
  

    printf("Enter a number to find factorial: ");

    scanf("%d",&n);
    if(n<=0)
    {
        printf("entered number is in negative");
    
    }
    
   else if (n=="%c")
    {
        printf("enter the valid input");
       
    }
  
   else if (n!=integer)
   {
       printf("enter a integer");
   }
    

    for(x=1;x<=n;x++)

        fact=fact*x;
    
    printf("Factorial of %d is: %d",n,fact);

    return 0;

}
