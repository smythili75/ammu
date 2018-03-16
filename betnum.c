#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int n;
	scanf("%d",&n);
	if(n>a&&n<b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
