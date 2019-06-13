#include<stdio.h>
//Modifying formal arg. don't effect actual arg.
void fun(int y){
	y=30;
}
void main(void){
	int x=20;
	fun(x);
	printf("%d",x);
}

