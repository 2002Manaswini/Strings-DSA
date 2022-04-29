#include<stdio.h>
int main()
{
   char a[]="decimal";
   char b[]="medical";

   int i;
   int H[26]={0};

   for(i=0;a[i]!='\0';i++)
   {
      H[a[i]-97]+=1;
   }

    for(i=0;b[i]!='\0';i++)
   {
      H[a[i]-97]==1;
      if(H[a[i]-97]<1)
      {  
         printf("Not Anagram !!");
          break;
      }
   }

   if(b[i]=='\0')
      printf("Anagram !!");

return 0;
}
