//program to check cube root of an integer 
#include<stdio.h>
#include<math.h>
int main()
{
  int n,c,a;
  printf("Enter the integer to find cube root :");
  scanf("%d",&n);
  c=cbrt(n);
  a=c*c*c;
  if(a==n)
  {
    printf("cube root of %d is %d\n",n,c);
  }
  else
  {
    printf("Number is not a perfect cube\n");
  }
}
