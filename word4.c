#include<stdio.h>
#include<string.h>
int main()
{
int i,count=1;
char c[20];
printf("enter the string");
scanf("%[^\n]s",c);
for(i=1;c[i]!='\0';i++)
{
if(c[i]== ' ')
{
count=count+1;
}
}
printf("count is:%d",count);
return 0;
}
