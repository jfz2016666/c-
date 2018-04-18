#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 
 {
   float x;
   int y;
   printf("请输入一个小于1000的正数:");
   scanf("%f",&x);
   if(x>=1000||x<=0)
   {
   printf(" 您输入的数不符合要求，请重新输入\n");
   scanf("%f",&x);}
   else
   {
   y=sqrt(x);
   printf("您所输入数的平方根是:%d",y);
   }
	return 0;
 }
