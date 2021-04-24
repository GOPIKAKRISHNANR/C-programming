#include<stdio.h>
void main()
{
  int n,i=0,c,ncopy;
  printf("Enter the number :");
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
      printf("%d",c);
      ncopy=ncopy/10;
    }
  }
  else
  {
    printf("Invalid number\n");
  }
  printf("\n");
}
