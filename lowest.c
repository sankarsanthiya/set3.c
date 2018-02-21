#include<stdio.h>
int main()
{
int a[10],i,n,l,m;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
l=a[1];
m=a[1];
if(a[i]<l)
{
l=a[i];
}
if(a[i]<m)
{
m=a[i];
}
printf("%d",l);
printf("highest:%d",m);
}

