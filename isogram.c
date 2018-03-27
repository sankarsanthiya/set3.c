#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50];
	int i,temp=0;
	printf("\nenter the string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[i+1])
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
	return 0;
}
