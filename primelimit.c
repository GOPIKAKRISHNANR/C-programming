#include<stdio.h>
int main()
{
  int a,b,flag=0,n,i;
  printf("Enter the range from a to b :");
  scanf("%d%d",&a,&b);
  n=a;
  while(n>=a && n<=b)
  {
      flag=0;
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
        printf("%d\n",n);
      }
      n++;
  }
}
