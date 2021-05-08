//factorial of a number
#include<stdio.h>
int main()
{
  int n,i=1,fact=i;
  printf("Enter the number :");
  scanf("%d",&n);
  while(i<=n)
  {
    fact = fact * i;
    i++;
  }
  printf("%d!=%d\n",n,fact);
}
