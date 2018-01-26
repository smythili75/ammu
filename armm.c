#include<stdio.h>
void main()
{
	int n,t,rem,result=0;
	scanf("%d",&n);
	n=t;
	while(n!=0)
	{
		rem=n%10;
		result=result*rem*rem*rem;
		n=n/10;
	}
	if(t==n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
