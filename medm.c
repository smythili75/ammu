#include<stdio.h>
void main()
{
	int i,j,n,t,a[3];
	scanf("%d",&n);
	for(i=0;i<=3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
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
            printf(" \n %d",a[i+1]);
}
