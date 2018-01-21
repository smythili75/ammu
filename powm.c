#include<stdio.h>
void main()
{
	int i,num,power,x=1;
	scanf("%d",&num);
	scanf("%d",&power);
	for(i=0;i<power;i++)
	{
	x=x*num;
	}
	printf("%d",x);
	}
