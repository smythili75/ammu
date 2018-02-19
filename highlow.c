#include<stdio.h>
void main()
{
	int n,i,j,t,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	i=0;
	printf(" \n highest number %d",a[i]);
	i=4;
	printf(" \n lowest number %d",a[i]);
}
