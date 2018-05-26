#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int i,n;
	  double h=100,s=100;
	  printf("请输入第几次落地:");
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)
	{
	  h*=0.5;
	  if(i==1)
	  continue;
	  s=4*h+s;
    }  
      printf("反弹高度是h=%f,共经过s=%f\n",h,s);                                                                                                                                 
	  return 0;
    }
