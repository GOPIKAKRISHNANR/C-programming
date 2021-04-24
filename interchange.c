/*program to interchange the values of a and b
input a=k,b=m
output a=m,b=k
*/
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the numbers :");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d\nb=%d\n",a,b);
}
