#include<stdio.h>
int main()
{
int a,b,t;
printf("enter the values");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the value is:%d %d",a,b);
return 0;
}
