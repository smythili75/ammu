#include<stdio.h>
void main()
{
	int n,i,b=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
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
