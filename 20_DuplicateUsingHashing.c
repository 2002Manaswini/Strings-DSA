#include<stdio.h>

 int main()
 {
    char a[]="manaswini";
    int h[26] = {0};
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>1)
        {
            printf("%c ",97+i);
                // printf("%d \n",h[i]);
        }    
    }

     return 0;
 }

 //for uppercase use : 65 instead of 97