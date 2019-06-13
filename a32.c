#include<stdio.h>
//swap values
void swap(int *,int *);
void main(){
	int x,y;
	printf("Enter the value of X & Y:\n");
       	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("After swapping:\nX=%d\nY=%d\n",x,y);
}
void swap(int *a,int *b){
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
