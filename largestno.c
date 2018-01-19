#include<stdio.h>
void main()
{
	int x=1,y=2,z=3;
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
