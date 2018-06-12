#include <stdio.h>
#include <stdlib.h>
char tongji(str0,b)
char str0[100];
int b[4];
{
	int i;
	for(i=0;str0[i]!='\0';i++)
{ if(str0[i]>=65&&str0[i]<=90||str0[i]>=97&&str0[i]<=122)
b[0]++;
else if(str0[i]>=48&&str0[i]<=57)
b[1]++;
else if(str0[i]==32)
b[2]++;
else b[3]++;
	}	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[100];
	static int i,a[4];
	gets(str1);
	tongji(str1,a);
	printf("Zimu Shuzi Kongge Qita\n");
	for(i=0;i<4;i++)
	printf("%-8d",a[i]);printf("\n");
	return 0;
}
