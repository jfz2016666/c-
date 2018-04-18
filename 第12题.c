#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	float x,y,d1,d2,d3,d4;
	int h;
	printf("请输入点的坐标\n");
	scanf("%f,%f",&x,&y);
	d1=(x-2)*(x-2)+(y-2)*(y-2); 
    d2=(x-2)*(x-2)+(y+2)*(y+2); 
    d3=(x+2)*(x+2)+(y-2)*(y-2); 
    d4=(x+2)*(x+2)+(y+2)*(y+2);
    if (d1>1 && d2>1 &&d3>1 &&d4>1) 
    {
     h=0;
    }
    else if(d1<=1 ||d2<=1 ||d3<=1 ||d4<=1) 
    {
    h=10;
    }
    printf("您输入的点的建筑高度为:%d\n",h);
    return 0;
 }
