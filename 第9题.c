#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
  {
	int a,b,c,d,e,x;
	printf("������һ��������5λ��������:");
	scanf("%d",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a!=0)
	{
	printf("����һ��5λ��%d%d%d%d%d\n",e,d,c,b,a);
	}
	else if(b!=0)
	{
	printf("����һ��4λ��%d%d%d%d%\n",e,d,c,b);
	}
	else if(c!=0)
	{
	printf("����һ��3λ��%d%d%d\n",e,d,c);
	}
	else if(d!=0)
	{
	printf("����һ��2λ��%d%d\n",e,d);
	}
	else if(e!=0)
	{
	printf("����һ��1λ��:%d\n",e);
	}
	return 0;
 }
