#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
  {
	int a,b,c,d,e,x;
	printf("请输入一个不多于5位的正整数:");
	scanf("%d",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a!=0)
	{
	printf("这是一个5位数%d%d%d%d%d\n",e,d,c,b,a);
	}
	else if(b!=0)
	{
	printf("这是一个4位数%d%d%d%d%\n",e,d,c,b);
	}
	else if(c!=0)
	{
	printf("这是一个3位数%d%d%d\n",e,d,c);
	}
	else if(d!=0)
	{
	printf("这是一个2位数%d%d\n",e,d);
	}
	else if(e!=0)
	{
	printf("这是一个1位数:%d\n",e);
	}
	return 0;
 }
