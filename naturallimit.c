//program to print natural numbers between the limit
#include<stdio.h>
int main()
{
  int n,a,b;
  printf("Enter the range from a to b :");
  scanf("%d%d",&a,&b);
  n=a;
  while(n>=a && n<=b)
  {
    printf("%d\n",n);
    n++;
  }
  printf("\n");
}
