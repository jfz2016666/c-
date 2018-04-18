#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float I,y;
    printf(" 请输入当月利润:");
	scanf("%f",&I);
	if(I<=100000)
	{
	y=I*0.1; 
	}
	else if(I<=200000)
	{
	y=10000+(I-100000)*0.075;
	 } 
	else if(I<=400000)
	{
	y=17500+(I-200000)*0.05;
	 } 
	 else if(I<=600000)
	{
	y=(I-400000)*0.03+27500;
	 } 
	 else if(I<=1000000)
	{
    y=(I-600000)*0.015+33500;
	 } 
	  else if(I>1000000)
	{
	y=(I-1000000)*0.01+39500;
	 } 
	 printf("应发奖金总数为 %f:\n",y);
	return 0;
     }
