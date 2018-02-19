#include<stdio.h>
void main()
{
	int t1=0,t2=1,n,i,nt;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d ",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
	
}
