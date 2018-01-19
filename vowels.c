#include<stdio.h>
void main()
{
	char x[5]={'a','e','i','o','u'};
	char y;
	scanf("%s",&y);
	if(y==x[5])
	{
		printf("the character is vowel");
	}
	else
	{
		printf("the character is consonant");
	}
}
