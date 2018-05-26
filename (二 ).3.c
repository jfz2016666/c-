#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
   long m,n,i=1,j,s;
   printf(" 请输入两个正整数m,n:");
   scanf("%ld,%ld",&m,&n);
   for(;i<=m&&i<=n;i++)
 {
   if(m%i==0&&n%i==0)
   s=i;
 }
   if(m>=n)
 { 
   j=m;
 } 
   else
 { 
   j=n;
 } 
   for(;!(j%m==0&&j%n==0);j++);
   printf(" 两个整数的最大公约数是:s=%ld\n",s);
   printf(" 两个整数的最小公倍数是:j=%ld\n",j);
   return 0;
 }
