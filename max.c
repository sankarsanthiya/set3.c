#include<stdio.h>
int main()
{
int a[20],i,max,n;
printf("enter the numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[0]<a[i])
{
max=a[i];
}
}
printf("maximum is:%d",max);
}
