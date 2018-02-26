#include<stdio.h>
int main()
{
int a,b,t;
printf("enter the two number");
scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
printf("after swaping:%d %d",a,b);
}
