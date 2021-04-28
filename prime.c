/*program to check whether a number is prime or not
prime number is a positive integer that is divisible only by 1 and itself
*/
#include<stdio.h>
int main()
{
  int n,flag=0,i;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0 && n>=2)
  {
    printf("%d is a prime number\n",n);
  }
  else
  {
    printf("%d is not a prime number\n",n);
  }
}
