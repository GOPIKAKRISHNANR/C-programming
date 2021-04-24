#include<stdio.h>
void main()
{
  int i=0,n,t1=0,t2=1,t3=t1;
  printf("Enter the number :");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d\n",t3);
    t1=t2;
    t2=t3;
    t3=t1+t2;
    i++;
  }
  printf("\n");
}
