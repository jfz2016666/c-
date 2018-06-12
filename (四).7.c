#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
fuzhi(a,b)
char a[100],b[100];
{
int i,j=0;
	for(i=0;a[i]!='\0';i++)
	if(a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117||a[i]==65||
	a[i]==69||a[i]==73||a[i]==85)
	{
	b[j]=a[i];
	j++;
	}
}
int main(int argc, char *argv[]) {
	char str1[100],str2[100];
	gets(str1);
	fuzhi(str1,str2);
	puts(str2);
	return 0;
}
