#include<stdio.h>
int main()
{
int i,count=0;
char s[20];
printf("enter the string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0' && s[i]<='9')
{
count++;
}
}
printf("%d",count);
}
