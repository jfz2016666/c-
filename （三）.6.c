#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
  static int m,n,k,b[11][11];
 b[0][1]=1;
 for(m=1;m<11;m++)
 {for(n=1;n<=m;n++)
 {
 b[m][n]=b[m-1][n-1]+b[m-1][n];
 printf("%5d",b[m][n]);
}
 printf("%\n");
}
return 0;
  }
