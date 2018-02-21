#include<stdio.h>
int main()
{
int count=0,n,r;
printf("enter the value");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
count++;
n=n/10;
}
printf("%d",count);
}
