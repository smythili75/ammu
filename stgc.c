#include<stdio.h>
void main()
{
	int n,i,count=1;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(n!=0)
		{
			n=n/10;
			count++; 
		}
	}
	printf("%d",count);
}
