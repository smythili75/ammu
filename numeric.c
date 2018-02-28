#include<stdio.h>
void main()
{
	int i,count=0;
	char s[100]="hello world.123";
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='.'||s[i]==' ');
		else if(s[i]>='0'&&s[i]<='9')
		{
			count=count+1;
		}
	}
	printf("%d",count);
}
