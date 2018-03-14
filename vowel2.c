#include<stdio.h>
void main()
{
	char c[100]="btabb";
	int i=0,b=0;
	while(c[i]!='\0')
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		{
		 b=b+1;
		}
	
	    i++;
	}
		if(b==0)
		{
			printf("no");
		}
		else
		{
			printf("yes");
		}
	
}
