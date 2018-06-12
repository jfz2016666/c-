#include <stdio.h>
#include <stdlib.h>
f(x,n)
int x[],n;
{
	int *p0,*p1,i,j,t,y;
	i=j=x[0];
	p0=p1=x;
	for(y=0;y<n;y++)
	{
		if(x[y]>i)
		{
			i=x[y];
			p0=&x[y];
		}
		else if(x[y]<j)
		{
			j=x[y];p1=&x[y];}}
			t=*p1;*p1=x[0];x[0]=t;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10],u,*r;
	for(u=0;u<10;u++)
	scanf("%d",&a[u]);
	f(a,10);
	for(u=0,r=a;u<10;u++,r++)
	printf("%d",a[u]);
	printf("\n");
	return 0;
}
