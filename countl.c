#include<stdio.h>
void main()
{
	int count=1,i=0;
	char s1[12]="hello world.goodbye";
	while(s1[i]!='\0')
	{
		if(s1[i]=='.')
		{
			count=count+1;
		}
		i++;
	}
	printf("%d",count);
}
