#include<stdio.h>
void main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(z>x&&z>y)
	{
		printf("%d largest number",z);
	}
	else
	{
	if(y>x)
	{
		printf("largest number");
	}
	else
	{
		printf("%d y is greater",x);
	}
	}
}
