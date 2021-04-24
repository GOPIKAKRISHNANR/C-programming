#include<stdio.h>
void main()
{
  int n,i;
  printf("Enter the amount :");
  scanf("%d",&n);
  if(n>=100)
  {
    i=n/100;
    n=n%100;
    printf("%d * 100\n",i);
  }
  if(n>=50)
  {
    i=n/50;
    n=n%50;
    printf("%d * 50\n",i);
  }
  if(n>=10)
  {
    i=n/10;
    n=n%10;
    printf("%d * 10\n",i);
  }
  if(n>=5)
  {
    i=n/5;
    n=n%5;
    printf("%d * 5\n",i);
  }
  if(n>=2)
  {
    i=n/2;
    n=n%2;
    printf("%d * 2\n",i);
  }
  if(n>=1)
  {
    i=n/1;
    printf("%d * 1\n",i);
  }
}
