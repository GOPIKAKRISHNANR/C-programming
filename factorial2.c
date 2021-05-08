#include<stdio.h>
int main()
{
  int i=1,fact=1,n;
  printf("Enter the number :");
  scanf("%d",&n);
  while(i<=n)
  {
    fact = fact * i;
    printf("%d",i);
    if(i!=n)
    {
      printf("x");
    }
    i++;
  }
  printf("=%d\n",fact);
}
