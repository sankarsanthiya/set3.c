#include<stdio.h>
int main()
{
int i,rem,n,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
t=n%10;
sum=sum+t;
n=n/10;
}
printf("sum is:%d",sum);
}
