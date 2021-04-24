#include<stdio.h>
void main()
{
  int n,m,i=1,s;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Enter the number of multiples:");
  scanf("%d",&m);
  while(i<=m)
  {
    s=i*n;
    printf("%d x %d = %d\n",i,n,s);
    i++;
  }

}
