#include<stdio.h>
#include<string.h>
int main()
{
	char ch[50];
	int count=0,i;
    scanf("%[^\n]s",ch);
    int l;
    l=strlen(ch);
	for (i = 0; i<l; i++)
  {
		if (ch[i] != ' ')
    {
		count++;
    }
    }
	printf("%d",count);
	return 0;
}
