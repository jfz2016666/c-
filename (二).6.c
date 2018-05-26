#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
    {
	  int n,i=1;
	  long sum=0,s=1;
	  printf("请输入一个小于20的正整数:");
	  scanf("%d",&n);
	  while(i<=n)
	{
	  s=s*i;
	  sum=sum+s;
	  i++;
	}
	  printf("sum=%ld\n",sum);
	  return 0;
    }
