#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,perimeter,s,area;
  {
    printf("Enter three sides of a triangle :");
    scanf("%f%f%f",&a,&b,&c);
    perimeter=a+b+c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    {
      printf("\nperimeter of triangle %f\n",perimeter);
      printf("\nsemiperimeter of triangle %f\n",s);
      printf("\n***********************************\n");
      printf("\narea of triangle %f\n",area);

    }
    printf("\n\n");
  }
}
