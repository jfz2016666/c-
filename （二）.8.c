#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
  {
	int i,j,k,n;
	printf("水仙花数是:");
	for(n=100;n<1000;n++)
  {
	i=n/100;
	j=n/10-i*10;
	k=n%10;
	if(n==(pow(i,3)+pow(j,3)+pow(k,3)))
	printf("%4d",n);
  }
    printf("\n");
	return 0;
  }
