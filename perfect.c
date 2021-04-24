#include<stdio.h>
void main()
{
  int n,i=1,s=0;
  printf("Enter the number:");
  scanf("%d",&n);
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
  else
  {
    printf("%d is not a perfect number\n",n);
  }

}
