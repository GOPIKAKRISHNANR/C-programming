//program to check the sum of first n natural numbers
#include<stdio.h>
int main()
{
  int n,i=1,sum=0;
  printf("Enter how many natural numbers :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
    printf("The sum of first %d natural numbers is %d\n",n,sum);
}
