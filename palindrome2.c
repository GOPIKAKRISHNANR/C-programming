/*program to check whether a word is palindrom or not
  by using strlen
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char a[20];
  int length,i,j;
  length=strlen(a);
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
