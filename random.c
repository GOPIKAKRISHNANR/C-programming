//program to find the numbers 1 to 20 randomly
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int count=0,n,a[20],i,found=0;
  srand(time(0));
  while(count<20)
  {
    n=rand()%20+1;
    found=0;
    for(i=0;i<count;i++)
    {
      if(a[i]==n)
      {
        found=1;
        break;
      }
    }
    if(found==0)
    {
      a[count]=n;
      count++;
    }
  }
  for(i=0;i<count;i++)
  {
    printf("%d\n",a[i]);
  }
}
