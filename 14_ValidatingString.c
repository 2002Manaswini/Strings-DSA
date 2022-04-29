#include<stdio.h>

int validate(char *name)
{
    int i;
    for(i=0;name[i] !='\0';i++)
    {
       if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) &&
               (name==48,49,50,51,52,53,54,55,56,57))
       {
           return 0;
       }
       return 1;
    }
}

int main()
{
  //  char *name="John321"; ---->  valid string

    char *n="John?321"; //invalid string
    if(validate(n))
    {
      printf("Valid String!!");
    }
    else
      printf("Invalid String!!");

  return 0;
}