//program to check sum of n numbers
#include<stdio.h>
int main()
  {
    int n,i=0,sum=0,m;
    printf("Enter how many numbers :");
    scanf("%d",&n);
    if(i<=n)
    {
      printf("Enter the %d numbers",n);
      for(i=0;i<=n;i++)
      {
        scanf("%d",&m);
        sum = sum + m;
      }
      printf("sum = %d",sum);
    }
    else
    {
      printf("Enter numbers less than or equal to %d",n);
    }
  }
