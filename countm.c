#include<stdio.h>
void main()
{
	int i,n,count=0;
	scanf("%d",&n);
	for(i=0;i<=5;i++)
	{
            if(n>0)
	{
	n=n/10;
	count=count+1;
	}
	}
	printf("%d",count);
	
}
