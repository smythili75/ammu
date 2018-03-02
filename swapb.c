#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}
