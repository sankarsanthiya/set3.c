#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20];
	int n,i,temp;
	printf("enter the string:");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
		{
			temp=1;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			temp=2;
		}
		else
		{
			temp=0;
		}

	}
	if(temp==1 && temp==2)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}

	return 0;
}
