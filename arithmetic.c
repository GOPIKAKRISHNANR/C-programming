/*program for addition,subtraction,multipication
  and division of two numbers
*/
#include<stdio.h>
void main()
{
  float a,b,s,p,m,d;
  printf("Enter the two numbers :");
  scanf("%f%f",&a,&b);
  s=a+b;
  p=a-b;
  m=a*b;
  d=a/b;
  printf("%f + %f = %f\n",a,b,s);
  printf("%f - %f = %f\n",a,b,p);
  printf("%f * %f = %f\n",a,b,m);
  printf("%f / %f = %f\n",a,b,d);
}
