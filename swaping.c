#include<stdio.h>
int main()
{
int a,b;
printf("enter the two values");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swaping:%d %d",a,b);
}
