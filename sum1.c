#include<stdio.h>
int main()
{
int a[10],i,sum=0,n,k;
printf("enter the limit");
scanf("%d",&n);
printf("enter the number upto sum");
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
