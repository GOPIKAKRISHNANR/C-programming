//program to check cube root of an integer usig for loop
#include<stdio.h>
int main()
{
  int n,cube,i;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    cube=i*i*i;
    if(cube==n)
    {
      printf("cube root of %d is %d\n",n,i);
      break;
    }
    else if(cube>n)
    {
      printf("%d is not a perfect cube\n",n);
      break;
    }
  }
}
