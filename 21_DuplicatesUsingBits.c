  #include<stdio.h>

  int main()
  {
    char a[]="finding";

    long int H=0; //1byte=8bits

    int i;
    int x=0;

    for(i=0;a[i]!='\0';i++)
    {
        x=1;
       x= x<<(a[i]-97);

       if(x && H > 0)
                 printf("%c is duplicate.\n",a[i]);
       
       else 
        H = H || x;
    }

      return 0;
  }