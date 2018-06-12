#include <stdio.h>
#include <stdlib.h>
lianjie(a,b)
char a[100],b[100];
{strcat(a,b);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[100],str2[100];
	gets(str1);gets(str2);
	lianjie(str1,str2);
	puts(str1);
	return 0;
}
