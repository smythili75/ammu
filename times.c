#include<stdio.h>
void main()
{
	int min1,hr1,min2,hr2,hr,min;
	scanf("%d %d",&hr1,&min1);
	scanf("%d %d",&hr2,&min2);
	hr=hr1-hr2;
	min=min1-min2;
	printf("%d %d",hr,min);
}
