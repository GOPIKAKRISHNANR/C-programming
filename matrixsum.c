//Addition of two matrices a and b
#include<stdio.h>
int main()
{
  int a[10][10],b[10][10],m,n,i,j,sum=0;
  printf("Enter the order of two matrices :");
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10)
  {
      printf("Enter the matrix a[i][j] :");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
      }
      printf("Enter the matrix b[i][j] :");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          scanf("%d",&b[i][j]);
        }
      }
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
      }
  }
  else
  {
    printf("Please enter order less than or equal to 10x10\n ");
  }
}
