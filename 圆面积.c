#include <stdio.h>
#include<stdlib.h>
#define PI 3.1415926
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
   float r,area;
   printf("������Բ�İ뾶:");
   scanf("%f",&r);
   area=PI*r*r;
   printf("Բ����Ϊ:%.7f Բ�İ뾶Ϊ:%f\n",PI,r);
   printf("Բ�����Ϊ:%f\n",area);
   return 0;
 }
