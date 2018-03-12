#include<stdio.h>
void main()
{
	int t1=0,t2=1,n,nt;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		nt=t1+t2;
		printf("%d",t1);
		t1=t2;
		t2=nt;
	}
}
