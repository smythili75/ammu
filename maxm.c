#include<stdio.h>
void main()
{
	int n,i,a[n],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1]&&a[i]>a[i+2])
		{
			t=a[i];
		}
		else if(a[i+1]>a[i+2]&&a[i+1]>a[i])
		{
			t=a[i+1];
		}
		else
		{
			t=a[i+2];
		}
	}
			printf("%d",t);

}
