#include<stdio.h>
void main()
{
  float p,c,m,q,t,h;
  printf("Enter the marks: ");
  scanf("%f%f%f",&p,&c,&m);
  t=p+c+m;
  q=t*100;
  h=q/300;
  printf("percentage mark of the student is %f\n",h);
  if(h>=80)
  {
    printf("%f is Distinction\n",h);
  }
  else if(h>=60)
  {
    printf("%f is First class\n",h);
  }
  else if(h>=50)
  {
    printf("%f is Second class\n",h);
  }
  else if(h>=40)
  {
    printf("%f is Third class\n",h);
  }
  else
  {
    printf("%f is Fail\n",h);
  }
}
