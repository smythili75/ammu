#include<stdio.h>
void main()
{
	char a[10]="hello";
	int i=0;
	int c=0;
	while(a[i]!='\0')
	{
		c++;
		i++;
	}
	if(c%2==0)
	{
		c=c/2;
		a[c--]=a[c]='*';
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	}
	else
	{
		c=c/2;
		 a[c]='*';
		 for(i=0;a[i]!='\0';i++)
		 {
		 	printf("%c",a[i]);
		 }
	}
}
