#include<stdio.h>
void main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    c=a*b;
    int n=0;
    for(i=0;i<=100;i++)
    {
        if(c==i*i)
        {
            n=1;
        }
    }
        if(n==1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
}
