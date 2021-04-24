#include<stdio.h>
void main()
{
  int a,b,s,p,m,d,n;
  printf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n");
  printf("Enter your choice: ");
  scanf("%d",&n);
  printf("Enter your first number:");
  scanf("%d",&a);
  printf("Enter your second number :");
  scanf("%d",&b);
  switch(n)
  {
    case 1:
      s=a+b;
      printf("%d",s);
      break;
    case 2:
      p=a-b;
      printf("%d",p);
      break;
    case 3:
      m=a*b;
      printf("%d",m);
      break;
    case 4:
      d=a/b;
      printf("%d",d);
      break;

  }
  printf("\n");
}
