#include <stdio.h>
#include <stdlib.h>
Struct
{
	int year;
	int month;
	int day;
}
date;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int days;
	printf("Input year,month,day:");
	scanf("%d,%D,%d",&date.year,%date.month,&date.day);
	switch(date.month)
	{case1:days=date.day;break;
	case2:days=date.day+31;break;
	case3:days=date.day+59;break;
	case4:days=date.day+90;break;
	case5:days=date.day+120;break;
	case6:days=date.day+31;break;
	case7:days=date.day+181;break;
	case8:days=date.day+211;break;
	case9:days=date.day+243;break;
	case10:days=date.day+273;break;
	case11:days=date.day+304;break;
	case12:days=date.day+334;break;
	}
	if((date.year%4==0&&date.year%100!=0||date.year%400==0)&&date.month>=3)
	days+=1;
	printf("\n%d/%d is the %dth day in %d",date,month,data,day,days,date,year);
	return 0;
}
