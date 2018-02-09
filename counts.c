#include<stdio.h>
void main()
{
	int count=0,i;
	char s[20]="HELLO WORLD";
	for(i=0;s[i]!=NULL;i++)
	{
		if(s[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
