#include<stdio.h>
void main()
{
	int n,t,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		sum=sum+t;
	    n=n/10;
	}
	printf("%d",sum);
}
