#include<stdio.h>
void main()
{
 int n,s=0,d;
 printf("Enter the number:");
 scanf("%d",&n);
 printf("sum of the digits of %d is",n);
 while(n>0)
 {
   d=n%10;
   s=s+d;
   n=n/10;
 }
 printf("sum = %d\n",s);
}
