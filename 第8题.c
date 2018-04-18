#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
 {
	float x;
	printf("请输入您的成绩:");
	scanf("%f",&x);
	if(x>=90)
	{
	printf("您的成绩等级为:A\n");	
	}
	else if(x>=80)
	{
	printf("您的成绩等级为:B\n");	
	}
	else if(x>=70)
	{
	printf("您的成绩等级为:C\n");	
	}
	else if(x>=60)
	{
	printf("您的成绩等级为:D\n");	
	}
	else
	{
	printf("您的成绩等级为:E\n");	
	}
	return 0;
 }
