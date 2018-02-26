#include <stdio.h>

int main() 
{
	char s[20];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(!((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')))
		{
			count=count+1;
		}
	}
	printf("\nthe number of special characters in the sentence is:%d",count);
	return 0;
}
