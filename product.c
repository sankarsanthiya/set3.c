#include<stdio.h>
int main()
{
int a,b,n;
printf("enter the value");
scanf("%d %d",&a,&b);
n=a*b;
if(n%2==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
