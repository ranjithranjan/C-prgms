#include<stdio.h>
int main()
{
int a,b;
int ch;
printf("enter a and b values ");
scanf("%d%d",&a,&b);
scanf("%d",&ch);
switch(ch)
{
case 1: printf("sum=%d",a+b);
case 2: printf("sub=%d",a-b);
default:
printf("invalid operator\n");
}
}


