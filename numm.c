#include<stdio.h>
void main()
{
    char x;
    scanf("%c",&x);
    if((x>='a'&&x<'z')||(x>='A'&&x<='Z'))
    {
        printf(" no");
    }
    else
    {
        printf( "yes");
    }
}
