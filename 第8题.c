#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
 {
	float x;
	printf("���������ĳɼ�:");
	scanf("%f",&x);
	if(x>=90)
	{
	printf("���ĳɼ��ȼ�Ϊ:A\n");	
	}
	else if(x>=80)
	{
	printf("���ĳɼ��ȼ�Ϊ:B\n");	
	}
	else if(x>=70)
	{
	printf("���ĳɼ��ȼ�Ϊ:C\n");	
	}
	else if(x>=60)
	{
	printf("���ĳɼ��ȼ�Ϊ:D\n");	
	}
	else
	{
	printf("���ĳɼ��ȼ�Ϊ:E\n");	
	}
	return 0;
 }
