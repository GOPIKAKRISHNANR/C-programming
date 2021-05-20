#include<stdio.h>
void main()
{
  int n,i,s;
  n=1;
  while(n<=10000)
  {
    i=1;
    s=0;
    while(i<n)
    {
      if(n%i==0)
      {
        s=s+i;
      }
      i++;
    }
    if(s==n)
    {
      printf("%d is a perfect number\n",n);
    }
    n++;
  }

}
