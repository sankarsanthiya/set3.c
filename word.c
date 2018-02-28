#include<stdio.h>
int main()
{
int i,count=0;
chr a[20];
printf("enter the string:);
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=' ')
{
count++;
}
}
printf("%d",count);
}
