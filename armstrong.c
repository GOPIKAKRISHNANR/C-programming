//program to check whether a number is armstrong number or not
#include<stdio.h>
#include<math.h>
void main()
{
  int n,l=0,ncopy,d,sum=0,ncopy2;
  printf("Enter the number :");
  scanf("%d",&n);
  ncopy=n;
  ncopy2=n;
  while(n>0)
  {
    n=n/10;
    l++;
  }
  while(ncopy>0)
  {
    d=ncopy%10;
    sum=sum+pow(d,l);
    ncopy=ncopy/10;
  }
  if(sum==ncopy2)
  {
    printf("%d is an Armstrong number\n",ncopy2);
  }
  else
  {
    printf("%d is not an Armstrong number\n",ncopy2);
  }
}
