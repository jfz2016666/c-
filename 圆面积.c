#include <stdio.h>
#include<stdlib.h>
#define PI 3.1415926
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
   float r,area;
   printf("请输入圆的半径:");
   scanf("%f",&r);
   area=PI*r*r;
   printf("圆周率为:%.7f 圆的半径为:%f\n",PI,r);
   printf("圆的面积为:%f\n",area);
   return 0;
 }
