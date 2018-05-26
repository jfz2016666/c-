#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char x;
    int a,b,c,d;        
    a=0;b=0;c=0;d=0;
    printf("请输入一行字符:");
    for(;(x=getchar())!='\n';)
 {
    if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
    a=a+1;  
    else if (x>='0'&&x<='9')
    b=b+1;
    else if(x==32)
    c=c+1;
    else
    d=d+1;
 }
    printf("英文字母数是:%d\n数字数是:%d\n空格数是:%d\n其他字符数数:%d",a,b,c,d);
	return 0;
 }
