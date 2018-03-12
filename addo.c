#include<stdio.h>
void main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int t;
	t=m+n;
	printf("%d",t);
	if(t%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
}
