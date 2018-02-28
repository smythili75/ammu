#include<stdio.h>
void main()
{
 int n,m;
 scanf("%d %d",&n,&m);
 int t;
 t=m*n;
 printf("%d",t);
 if(t%2==0)
 {
 	printf("\neven");
 }
 else
 {
 	printf("\nodd");
 }
}
