#include<stdio.h>
void main()
{
	int n,min,hr;
	scanf("%d",&n);
	 min=n%60;
	 hr=n/60;
	 printf("%d %d",hr,min);
}
