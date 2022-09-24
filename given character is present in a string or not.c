#include <stdio.h>
#include<string.h>
int main() {
    char str[50],c;
    int i;
    printf("\nEnter the string : ");
    scanf("%s",str);
    printf("\nEnter the char to find : ");
    scanf(" %c",&c);
    for(i=0;i<strlen(str)&&str[i]!=c;i++);
    if(i<strlen(str))
        printf("\nCharecter found,position : %d",i+1);
    else
        printf("\nCharecter not found");
    return 0;
}
