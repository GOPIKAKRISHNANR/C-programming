//program to find the first four perfect numbers
#include<stdio.h>
void main()
{
  int n,i,s,count=0;
  n=1;
  while(count<4)
  {
    i=1;
    s=0;
    while(i<n)
    {
      if(n%i==0) //when n%i become zero go to step 14 to 18 and when while(step 11) condition breaks go to step 19
      {
        s=s+i;
      }
      i++;
    }
    if(s==n)
    {
      printf("%d\n",n);
      count=count+1;
    }
    n++;
  }
}
