#include<stdio.h>
void main()
{
  int n,ncopy,i=0,s=0,c;
  printf("Enter the five digit number :");
  scanf("%d",&n);
  ncopy=n;
  while(n>0)
  {
    n=n/10;
    i++;
  }
  if(i==5)
  {
    while(ncopy>0)
    {
      c=ncopy%10;
      s=s+c;
      ncopy=ncopy/10;
    }
      printf("sum of the five digit number is %d\n",s);
  }
  else
  {
      printf("Invalid number\n");
  }
}
