#include <stdio.h>
#include <stdlib.h>
char f(b);
char b[4]; 
{	int i=0;
	for(;i<4;i++)
	{
		printf("");
		printf("%c",b[i]);
	}
	printf("\n");
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,u,v, w,t;
	char c[4];
	scanf("%4d",&a);
	u=a*0.001;
	v=0.01*(a-1000*u);
	w=(a-1000*u-100*v)*0.1;
	t=a-1000*u-100*v-10*w;
	c[0]=u+48;
	c[1]=v+48;
	c[2]=w+48;
	c[3]=t+48;
	f(c);
	return 0;
}
