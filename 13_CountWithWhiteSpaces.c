#include<stdio.h>

int main()
{
    char A[]="how are   u";  //white spaces 
    int i,word;
    word=1;

    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]==' ' && A[i-1] != ' ')
           word++;
    }

    printf("%d",word);

    return 0;
}