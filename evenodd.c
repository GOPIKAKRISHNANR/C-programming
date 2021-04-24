#include<stdio.h>
void main()
{
    int a;
    printf("\n**********\n");
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is an even number",a);
    }
    else
    {
        printf("%d is an odd number",a);
    }
    printf("\n");
}
