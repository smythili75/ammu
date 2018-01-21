#include<stdio.h>
void main()
{
	int n,i,a[i],sum=0;
	int k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		sum=sum+a[i];
	}
		printf("  sum is %d",sum);
	
}
