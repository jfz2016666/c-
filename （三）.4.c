#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
  {
    static int a[10]={1,7,8,17,23,24,59,62,101};
    int i,j,t;
    printf("请输入一个数:");
    scanf("%d",&a[9]);
    for (i=9;i>0;i--)
    if(a[i]<a[i-1])
  {
	t=a[i-1];
	a[i-1]=a[i];
	a[i]=t;
  }
   for(i=0;i<10;i++)
   printf("%5d",a[i]);
   printf("\n");	
   return 0;
  }
