#include <stdio.h>
int main() {
    char name[50];
    int rollno,i,b,integers,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr=(fopen("/Users/muthu/test.txt","w"));
    if(fptr==NULL) {
        printf("Error!");
    }
    for (i=0;i<n;++i) {
        printf("For student%d\nEnter name: ",i+1);
        scanf("%s",name);
        printf("Enter rollno: ");
        scanf("%d",&b);
        if(b>0)
        {
              fprintf(fptr,"\nName: %s \nMarks=%d \n",name,rollno);
        }
        else
        {
            printf("enter a valid roll no");
        }
    }
    
    fclose(fptr);
    return 0;
}


