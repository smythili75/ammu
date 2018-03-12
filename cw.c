#include<stdio.h>
void main()
{
	char s[20]="hello world";
	int i,c=1;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			c++;
		}
	}
printf("%d",c);
}
