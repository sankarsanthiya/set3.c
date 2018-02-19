#include<stdio.h>
int main()
{
int t,t1=0,t2=1,n,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
  printf("%d\t",t1);
t=t1+t2;
t1=t2;
t2=t;
}
}
