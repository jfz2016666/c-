#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
  {
	int i,j,k;
	char a[5][5];
	for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
  {a[i][j]='*';
	printf("%c",a[i][j]);
  }
	printf("\n");
	for(k=1;k<=i+1;k++)
	printf("\40");}
	printf("\n");
	return 0;
  }
