#include<stdio.h>
//change in actual para. by formal para. using Pointer
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main(){
	int a=3,b=4;
	swap(&a,&b);
	printf("%d%d",a,b);
}
