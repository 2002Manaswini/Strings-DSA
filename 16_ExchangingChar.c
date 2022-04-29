//strings are immutable in some c and c++ compilers.
//some strings are immutable when they are taken in a pointer.
//strings is mutable only when used with array of characters.


#include<stdio.h>

int main()
{
    char c[]="welcome";
    int i,j;
    int t;

    for(i=0;c[i]!='\0';i++)
    {

    }

    i=i-1;

    for(j=0;j<i;i--,j++)
    {
        t=c[j];
        c[j]=c[i];
        c[i]=t;

    }
    
    printf("%s",c);

   return 0;
}