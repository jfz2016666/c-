#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[50][50],n,x,y,i,j,k;
 printf("����ħ����Ľ���n:n");
 scanf("%d",&n);
 if(n%2==0) n++;
 for (i=1;i<=n;i++)
  for (j=1;j<=n;j++)
   a[i][j]=0;
 i=1;j=(n+1)/2;a[i][j]=1;
 for (k=2;k<=n*n;k++)
      {i--;j++;
        if ((i<1) && (j>n)) {i+=2;j--;}
        if(i<1) i=n;
     if(j>n) j=1;
     if (a[i][j]!=0) {i+=2;j--;}    
     a[i][j]=k;
      }
 for (i=1;i<=n;i++)
  for (j=1;j<=n;j++)
  {printf("%3d ",a[i][j]);
  if(j==n) 
  printf("n");}
  getchar();getchar();
	return 0;
}
