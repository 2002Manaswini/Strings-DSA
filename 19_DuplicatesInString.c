 //duplicates in a string
 
#include<stdio.h>

int main()
{
    int i,j;
    int count=1;
    char c[]="manaswini";

    for(i=0;c[i]!='\0';i++)
    {
        for(j=i+1;c[j]!='\0';j++)
        {
            if(c[i]==c[j])
            {
                count++;
            }
         }
   printf("%c is printed %d times.\n",c[i],count);
    }
    return 0;
}