#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 
 {
   float x;
   int y;
   printf("������һ��С��1000������:");
   scanf("%f",&x);
   if(x>=1000||x<=0)
   {
   printf(" ���������������Ҫ������������\n");
   scanf("%f",&x);}
   else
   {
   y=sqrt(x);
   printf("������������ƽ������:%d",y);
   }
	return 0;
 }
