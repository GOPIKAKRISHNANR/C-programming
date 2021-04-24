#include<stdio.h>
int main()
{
  int n,a[50],i;
  printf("Enter how many numbers(less than or equal to 50) :");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("Enter the %d numbers",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
      printf("%d\t",a[i]);
    }
  }
  else
  {
    printf("Enter numbers less than or equal to 50 : ");
  }
  printf("\n\n");
}
