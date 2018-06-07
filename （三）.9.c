#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
  {
	static int i,j,m,a[15]={1,4,9,13,21,34,55,89,144,233,377,570,671,703,812};
	scanf("%d",&m);
	for(j=0;j<15;j++)
	printf("%4d",a[j]);
	printf("\n");
	i=7;
	while(fabs(i-7)<8)
  {
	if(m<a[7])
  {if(a[i]-m==0)
  {printf("it is at(%d)\n",i+1);
	break;
  }
	i--;
  }
	else if(m>a[7])
  {
    if(a[i]-m==0)
  {
    printf("it is at (%d)\n",i+1);
	break;
  }
	i++;
  }
	else
	printf("8\n");
  }
    if(fabs(i-7)-8==0)
    printf("There is not\n");
	return 0;
  }
