/*program to check the sum of n numbers
  using array
*/
#include<stdio.h>
int main()
{
  int n,a[50],i,sum=0;
  printf("Enter how many numbers(should be less than or edual to 50) :");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("Enter %d numbers :",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    printf("sum = %d\n",sum);
  }
  else
  {
    printf("Enter a number less than or equal to 50\n");
  }
}
