#include<stdio.h>
void main()
{
	int i,n,a[i],sum=0,avg;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum is %d",sum);
	avg=sum/n;
	printf("\navg is %d",avg);
}
