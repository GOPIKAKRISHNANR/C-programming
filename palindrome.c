//program to check whether a word is palindrom or not
#include<stdio.h>
int main()
{
  char a[20];
  int length=0,j,i;
  printf("Enter the word :");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    length++;
  }
  for(i=0,j=length-1;i<j;i++,j--)
  {
    if(a[i]!=a[j])
    {
      break;
    }
  }
  if(i<j)
  {
    printf("Not Palindrom\n");
  }
  else
  {
    printf("Palindrom\n");
  }
}
