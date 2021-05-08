//program to decode a word
#include<stdio.h>
int main()
{
  char a[10];
  int i=0,length=0;
  printf("Enter your word :");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    length++;
  }
  for(i=0;i<length;i++)
  {
    if(a[i]=='a')
    {
      printf("%c",'y');
    }
    else if(a[i]=='b')
    {
      printf("%c",'z');
    }
    else
    {
      printf("%c",a[i]-2);
    }
  }
  printf("\n");
}
