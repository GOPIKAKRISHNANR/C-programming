//program to check first 100 prime numbers
#include<stdio.h>
int main()
{
  int n=1,count=0,i,flag=0;
  while(count<100)
  {
    flag=0;
    for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0 && n>=2)
    {
      printf("%d\n",n);
      count++;
    }
    n++;
  }
}
