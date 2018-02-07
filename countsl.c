#include<stdio.h>
void main()
{
	int i,count=0;
	char s1[20]="laptop is good";
	for(i=0;s1[i]!='\0';i++)
	{
	if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z')&&(s1[i]!='\0'||s1[i]!=' '))
{
	count=count+1;
}
}
	printf("%d",count);
}
