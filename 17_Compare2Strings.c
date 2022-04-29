#include<stdio.h>

int main()
{
    char a[]="python";
    char b[]="java";
   
    int i,j;

    for(i=0,j=0 ; a[i]!='\0'&& b[j]!='\0' ; i++,j++)
    {
    if(a[i]!=b[j])
         break;    
    }

    if(a[i]==b[j])
    {
        printf("equal..");
    }

    else if(a[i]<b[i])
              printf("Smaller...");
            
        else
           printf("greater...");

    return 0;
}