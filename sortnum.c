//program to sort n numbers in ascending order 
#include<stdio.h>
int main()
{
  int a[10],i,j,n,c;
  printf("Enter how many numbers :");
  scanf("%d",&n);
  if(n<=10)
  {
    printf("Enter the numbers :");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
          c = a[i];
          a[i] = a[j];
          a[j] = c;
        }
      }
    }
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    printf("\n");
  }
  else
  {
    printf("Enter numbers less than or equal to %d",n);
  }
}
