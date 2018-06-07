#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	char str1[100], str2[100], str3[201];
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	str3[i]=str1[i];
	for(j=0;str2[j]!='\0';j++)
	str3[j+i]=str2[j];
	printf("%s\n%s\n%s\n",str1,str2,str3);
	return 0;
}
