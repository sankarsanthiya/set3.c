#include<stdio.h>
int main()
{
int n,i,sum=0,rem;
printf("enter the numbers");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum+rem;
n=n/10
}
printf("sum is:%d",sum);
return 0;
}
