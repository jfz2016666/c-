#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5][5],b[5],c[5],d[5][5],k=0,l=0;
	int i,j;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&d[i][j]);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++,a[i][j]=d[i][j]);
		for(i=0,k=0;i<5;i++,k++)
		for(j=0;j<4;j++)
		{if(a[i][j]>=a[i][j+1])
		b[k]=a[i][j+1]=a[i][j];
		else
		b[k]=a[i][j+1];
	}
	for(j=0,l=0;j<5;j++,l++)
		for(i=0;i<4;i++)
		{if(a[i][j]<=a[i+1][j])
		c[l]=a[i+1][j]=a[i][j];
		else
		c[l]=a[i+1][j];
	 }
	 for(i=0,k=0;i<5;i++,k++)
	 for(j=0,l=0;j<5;j++,l++)
	 if(d[i][j]-b[k]==0)
	 { if(d[i][j]-c[l]==0)
	 printf("d[%d][%d]=%d\n",i,j,d[i][j]);
	 else
	 printf("d[%d][%d]=%d is not and i\n",i,j,d[i][j]);
	 }
	return 0;
}
