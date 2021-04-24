 #include<stdio.h>
 #include<math.h>
 int main()
 {
   float l1,l2,g1,g2,d;
   printf("Enter latitude and longitude of first place :");
   scanf("%f%f",&l1,&g1);
   printf("Enter latitude and longitude of second place :");
   scanf("%f%f",&l2,&g2);
   l1=l1*(M_PI/180);
   l2=l2*(M_PI/180);
   g1=g1*(M_PI/180);
   g2=g2*(M_PI/180);
   d=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2)*cos(g2-g1)));
   printf("distance %f",d);
   printf("\n\n");
 }
