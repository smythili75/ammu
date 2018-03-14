#include<stdio.h>
void main()
{
	int m,i,b=0;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		if(m%i==0)
		{
			b=b+1;
		}
	}
	if(b==2)
	{
		printf("yes");
	}
	else
	printf("no");
}
