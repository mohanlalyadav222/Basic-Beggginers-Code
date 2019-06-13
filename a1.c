/*Format specifier */
#include<stdio.h>

int main(){
	int a=10;
        float b=10.25;
        char c='M';     //output
	printf("%d\n",a);//10
        printf("%6d\n",a);//____10
        printf("%f\n",b); //10.250000
        printf("%6f\n",b);//10.250000
        printf("%.2f\n",b);//10.25
	printf("%6.2f\n",b);//_10.25
        printf("%c\n",c);   //M
        printf("%2c\n",c);  //_M
        }

