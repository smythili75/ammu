#include<stdio.h>
void main()
{
	int count=1,i;
	char s1[12]="hello world";
	while(s1[i]!='\0')
	{
		if(s1[i]==' '||s1[i]=='\0')
		{
			count=count+1;
		}
		i++;
	}
	printf("%d",count);
}
