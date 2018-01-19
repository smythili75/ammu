#include<stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("character is alphabet");
	}
	else
	{
		printf("the character is not alphabet");
	}
}
