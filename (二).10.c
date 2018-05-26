#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float i=1;  
     float j=2;  
     float sum=0;  
     int k;  
     for(k=1;k<=20;k++)  
   {  
     int x;  
     sum=sum+j/i;  
     x=i;  
     i=j;  
     j=x+j;  
   }  
     printf("½á¹ûÎª%f\n",sum);  
	 return 0;
   }
